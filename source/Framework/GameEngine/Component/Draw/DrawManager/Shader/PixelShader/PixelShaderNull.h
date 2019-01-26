//================================================================================
//!	@file	 PixelShaderNull.h
//!	@brief	 �󔒃s�N�Z���V�F�[�_�[Class
//! @details 
//!	@author  Kai Araki									@date 2019/01/19
//================================================================================
#ifndef	_PIXEL_SHADER_NULL_H_
#define _PIXEL_SHADER_NULL_H_



//****************************************
// �C���N���[�h��
//****************************************
#include "../PixelShaderBase/PixelShaderBase.h"



//************************************************************														   
//! @brief   �󔒃s�N�Z���V�F�[�_�[Class
//!
//! @details �󔒃s�N�Z���V�F�[�_�[��Class
//************************************************************
class PixelShaderNull : public PixelShaderBase
{
//====================
// �֐�
//====================
public:
	//----------------------------------------
	//! @brief �������֐�
	//! @details
	//! @param void �Ȃ�
	//! @retval void �Ȃ�
	//----------------------------------------
	virtual void Init();

	//----------------------------------------
	//! @brief �I���֐�
	//! @details
	//! @param void �Ȃ�
	//! @retval void �Ȃ�
	//----------------------------------------
	virtual void Uninit();

	//----------------------------------------
	//! @brief �I�u�W�F�N�g�ݒ�֐�
	//! @details
	//! @param *draw        �`����N���X
	//! @param *camera      �J����
	//! @param object_index �`��I�u�W�F�N�g�C���f�b�N�X
	//! @retval void �Ȃ�
	//----------------------------------------
	virtual void ObjectSetting(DrawBase* draw, Camera* camera, unsigned object_index);

	//----------------------------------------
	//! @brief ���b�V���ݒ�֐�
	//! @details
	//! @param *draw        �`����N���X
	//! @param *camera      �J����
	//! @param object_index �`��I�u�W�F�N�g�C���f�b�N�X
	//! @param mesh_index   ���b�V���C���f�b�N�X
	//! @retval void �Ȃ�
	//----------------------------------------
	virtual void MeshSetting(DrawBase* draw, Camera* camera,
							 unsigned object_index, unsigned mesh_index);
};

#endif