//================================================================================
//!	@file	 TitleLogo.h
//!	@brief	 タイトルロゴClass
//! @details 
//!	@author  Kai Araki									@date 2018/07/03
//================================================================================
#ifndef	_TITLE_LOGO_H_
#define _TITLE_LOGO_H_



//****************************************
// インクルード文
//****************************************
#include <GameEngine/GameObject/GameObjectNull.h>



//************************************************************														   
//! @brief   タイトルロゴClass
//!
//! @details タイトルロゴのClass
//************************************************************
class TitleLogo : public GameObjectNull
{
//====================
// 関数
//====================
public:
	//----------------------------------------
	//! @brief 初期化関数
	//! @details
	//! @param *draw 描画基底クラス
	//! @retval void なし
	//----------------------------------------
	void Init(DrawBase* draw);
};



#endif