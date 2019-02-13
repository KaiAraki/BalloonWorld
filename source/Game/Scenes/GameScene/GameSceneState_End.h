//================================================================================
//!	@file	 GameSceneState_End.h
//!	@brief	 �Q�[���V�[���X�e�[�g(�ŏI)Class
//! @details 
//!	@author  Kai Araki									@date 2019/02/13
//================================================================================
#ifndef	_GAME_SCENE_STATE_END_H_
#define _GAME_SCENE_STATE_END_H_



//****************************************
// �C���N���[�h��
//****************************************
#include <GameEngine/Scene/SceneNull.h>



//****************************************
// �N���X�錾
//****************************************
class GameScene;



//************************************************************														   
//! @brief   �Q�[���V�[���X�e�[�g(�ŏI)Class
//!
//! @details �Q�[���V�[���̃X�e�[�g(�ŏI)Class
//! @details �ŏI�̏�Ԃ�\��
//************************************************************
class GameSceneState_End : public SceneNull::StateNull
{
//====================
// �ϐ�
//====================
private:
	GameScene* game_scene_ = nullptr;	//!< �Q�[���V�[��


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
	void Init() override;

	//----------------------------------------
	//! @brief �X�V�֐�
	//! @details
	//! @param void �Ȃ�
	//! @retval void �Ȃ�
	//----------------------------------------
	void Update() override;
};



#endif