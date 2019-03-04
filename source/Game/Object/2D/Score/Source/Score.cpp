//================================================================================
//!	@file	 Score.cpp
//!	@brief	 スコアClass
//! @details 
//!	@author  Kai Araki									@date 2018/06/19
//================================================================================



//****************************************
// インクルード文
//****************************************
#include "../Score.h"



//****************************************
// プロパティ定義
//****************************************
int Score::getScore()
{
	return score_;
}



void Score::setScore(int value)
{
	score_ = value;
}



//****************************************
// 関数定義
//****************************************
void Score::Init(DrawBase* draw)
{
	score_ = 0;

	// 基底クラスの初期化
	setIsUpdate(false);
	GameObjectBase::Init(draw, nullptr);
}