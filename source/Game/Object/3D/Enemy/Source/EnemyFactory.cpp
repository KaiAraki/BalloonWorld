//================================================================================
//!	@file	 EnemyFactory.cpp
//!	@brief	 �G����Class
//! @details 
//!	@author  Kai Araki									@date 2018/07/24
//================================================================================



//****************************************
// �C���N���[�h��
//****************************************
#include "../EnemyFactory.h"



//****************************************
// �֐���`
//****************************************
Enemy* EnemyFactory::Create()
{
	Enemy* temp = new Enemy();
	temp->Init(new EnemyUpdate(),
			   new EnemyDraw(),
			   new EnemyCollision());
	return temp;
}