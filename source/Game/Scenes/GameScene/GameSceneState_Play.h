//================================================================================
//!	@file	 GameSceneState_Play.h
//!	@brief	 �Q�[���V�[���X�e�[�g(�v���C)Class
//! @details 
//!	@author  Kai Araki									@date 2019/02/18
//================================================================================
#ifndef	_GAME_SCENE_PLAY_START_H_
#define _GAME_SCENE_PLAY_START_H_



//****************************************
// �C���N���[�h��
//****************************************
#include <GameEngine/Scene/SceneNull.h>



//****************************************
// �N���X�錾
//****************************************
class GameScene;



//************************************************************														   
//! @brief   �Q�[���V�[���X�e�[�g(�v���C)Class
//!
//! @details �Q�[���V�[���̃X�e�[�g(�v���C)Class
//! @details �v���C�̏�Ԃ�\��
//************************************************************
class GameSceneState_Play : public SceneNull::StateNull
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