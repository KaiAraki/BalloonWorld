//================================================================================
//!	@file	 Enemy.cpp
//!	@brief	 敵Class
//! @details 
//!	@author  Kai Araki									@date 2018/07/24
//================================================================================



//****************************************
// インクルード文
//****************************************
#include "../Enemy.h"



//****************************************
// 関数定義
//****************************************
void Enemy::Init(UpdateBase* update, DrawBase* draw, CollisionBase* collision)
{
	// 基底クラスの初期化
	GameObjectBase::Init(update, draw, collision);
}