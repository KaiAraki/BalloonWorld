//================================================================================
//!	@file	 DefaultShadow.vsh
//!	@brief	 �f�t�H���g�eVertexShader
//! @details 
//!	@author  Kai Araki									@date 2019/02/19
//================================================================================



//****************************************
// �O���[�o���ϐ�
//****************************************
// �ϊ��s��
float4x4 MATRIX_WORLD;
float4x4 MATRIX_VIEW;
float4x4 MATRIX_PROJECTION;
float4x4 LIGHT_VIEW;
float4x4 LIGHT_PROJECTION;
float4x4 TEXTURE_PROJECTION;

// �}�e���A��
float4 MATERIAL_DIFFUSE = {1.0f, 1.0f, 1.0f, 1.0f};

// �f�B���N�V���i�����C�g�x�N�g��(�v���O������Ő��K���ς݂��n�����)
float4 DIRECTIONAL_LIGHT_VECTOR = {1.0f, 0.0f, 0.0f, 1.0f};



//************************************************************														   
//! @brief   �C���v�b�gStruct
//!
//! @details �C���v�b�g��Struct
//************************************************************
struct Input
{
    float4 position_ : POSITION;    //!< ���[�J�����W
    float4 normal_   : NORMAL;      //!< �@��
    float4 color_    : COLOR0;      //!< �F
    float2 uv_       : TEXCOORD0;   //!< UV
};



//************************************************************														   
//! @brief   �A�E�g�v�b�gStruct
//!
//! @details �A�E�g�v�b�g��Struct
//************************************************************
struct Output
{
    float4 position_         : POSITION;  //!< �ϊ��ςݍ��W
    float4 color_            : COLOR0;    //!< �F
    float2 ps_uv_            : TEXCOORD0; //!< PS�pUV
    float4 ps_diffuse_       : TEXCOORD1; //!< PS�p�f�B�q���[�Y
    float4 ps_ambient_       : TEXCOORD2; //!< PS�p�A���r�G���g
    float4 ps_shadow_map_uv_ : TEXCOORD3; //!< PS�p�V���h�E�}�b�vUV
    float4 ps_depth_         : TEXCOORD4; //!< PS�p�[�x�l
};



//****************************************
// �֐��錾
//****************************************
void CalculateWorldPosition(Input input, inout Output output);
void CalculateShadowMapUV(Input input, inout Output output);
void CalculateDepth(Input input, inout Output output);
void CalculateLambertDiffuseLighting(Input input, inout Output output);


//--------------------------------------------------
//! @brief �G���g���[�֐�
//! @details
//! @param input   ���̓f�[�^ 
//! @retval Output �o�̓f�[�^
//--------------------------------------------------
Output MainVertexShader(Input input)
{
	// �o�̓f�[�^�̏�����
    Output output = (Output)0;

    // ���[���h���W�Z�o
    CalculateWorldPosition(input, output);

    // �V���h�E�}�b�vUV�Z�o
    CalculateShadowMapUV(input, output);

    CalculateDepth(input, output);

    // �����o�[�g�g�U�Ɩ��ł̐F�Z�o
    CalculateLambertDiffuseLighting(input, output);
    
    // PS�֓n���l�̑��
    output.ps_uv_ = input.uv_;

    return output;
}



//--------------------------------------------------
//! @brief ���[���h���W�Z�o�֐�
//! @details
//! @param input  ���̓f�[�^
//! @param output �o�̓f�[�^
//! @retval void �Ȃ�
//--------------------------------------------------
void CalculateWorldPosition(Input input, inout Output output)
{
    // ���[���h���W�Z�o
    input.position_.w = 1.0f;
    output.position_ = mul(input.position_, MATRIX_WORLD);
    output.position_ = mul(output.position_, MATRIX_VIEW);
    output.position_ = mul(output.position_, MATRIX_PROJECTION);
}



//--------------------------------------------------
//! @brief �V���h�E�}�b�vUV�Z�o�֐�
//! @details
//! @param input  ���̓f�[�^
//! @param output �o�̓f�[�^
//! @retval void �Ȃ�
//--------------------------------------------------
void CalculateShadowMapUV(Input input, inout Output output)
{
    input.position_.w = 1.0f;
    output.ps_shadow_map_uv_ = mul(input.position_, MATRIX_WORLD);
    output.ps_shadow_map_uv_ = mul(output.ps_shadow_map_uv_, LIGHT_VIEW);
    output.ps_shadow_map_uv_ = mul(output.ps_shadow_map_uv_, LIGHT_PROJECTION);
    output.ps_shadow_map_uv_ = mul(output.ps_shadow_map_uv_, TEXTURE_PROJECTION);
}



//--------------------------------------------------
//! @brief �[�x�l�Z�o�֐�
//! @details
//! @param input  ���̓f�[�^
//! @param output �o�̓f�[�^
//! @retval void �Ȃ�
//--------------------------------------------------
void CalculateDepth(Input input, inout Output output)
{
    input.position_.w = 1.0f;
    output.ps_depth_ = mul(input.position_, MATRIX_WORLD);
    output.ps_depth_ = mul(output.ps_depth_, LIGHT_VIEW);
    output.ps_depth_ = mul(output.ps_depth_, LIGHT_PROJECTION);
}



//--------------------------------------------------
//! @brief �����o�[�g�g�U�Ɩ��ł̐F�Z�o�֐�
//! @details
//! @param input  ���̓f�[�^
//! @param output �o�̓f�[�^
//! @retval void �Ȃ�
//--------------------------------------------------
void CalculateLambertDiffuseLighting(Input input, inout Output output)
{
    // �����̋����̔䗦��ۑ�
    float ambient_ratio = DIRECTIONAL_LIGHT_VECTOR.w;

    // �f�B���N�V���i�����C�g�x�N�g���𔽓]
    float4 inverse_light_vector = -DIRECTIONAL_LIGHT_VECTOR;

    // �F�̌v�Z
    output.ps_diffuse_ = MATERIAL_DIFFUSE * max(dot(input.normal_, inverse_light_vector), 0);
    output.ps_ambient_ = MATERIAL_DIFFUSE * ambient_ratio;

    // ���l���␳�̊����̔䗦�̉e�����󂯂Ă��܂��̂ŕʓr���������
    output.ps_diffuse_.a = MATERIAL_DIFFUSE.a;
    output.ps_ambient_.a = MATERIAL_DIFFUSE.a;
}