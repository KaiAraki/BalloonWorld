//================================================================================
//!	@file	 BalloonNum.h
//!	@brief	 風船数Class
//! @details 
//!	@author  Kai Araki									@date 2019/02/20
//================================================================================
#ifndef	_BALLOON_NUM_H_
#define _BALLOON_NUM_H_



//****************************************
// インクルード文
//****************************************
#include <GameEngine/GameObject/GameObjectNull.h>



//************************************************************														   
//! @brief   風船数Class
//!
//! @details 風船数のClass
//************************************************************
class BalloonNum : public GameObjectNull
{
//====================
// 変数
//====================
private:
	int balloon_num_ = 0;	//!< 風船数


//====================
// プロパティ
//====================
public:
	//----------------------------------------
	//! @brief 風船数取得関数
	//! @details
	//! @param void なし
	//! @retval int 風船数
	//----------------------------------------
	int getBalloonNum();

	//----------------------------------------
	//! @brief 風船数設定関数
	//! @details
	//! @param value 風船数
	//! @retval void なし
	//----------------------------------------
	void setBalloonNum(int value);


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