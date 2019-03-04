//================================================================================
//!	@file	 ScoreFactory.cpp
//!	@brief	 スコア生成Class
//! @details 
//!	@author  Kai Araki									@date 2018/06/19
//================================================================================



//****************************************
// インクルード文
//****************************************
#include "../ScoreFactory.h"



//****************************************
// 関数定義
//****************************************
Score* ScoreFactory::Create()
{
	Score* temp = new Score();
	temp->Init(new ScoreDraw());
	return temp;
}