//================================================================================
//!	@file	 BalloonFactory.h
//!	@brief	 風船生成Class
//! @details 
//!	@author  Kai Araki									@date 2019/02/05
//================================================================================
#ifndef	_BALLOON_FACTORY_H_
#define _BALLOON_FACTORY_H_



//****************************************
// インクルード文
//****************************************
#include "Balloon.h"
#include "BalloonDraw.h"



//************************************************************														   
//! @brief   風船生成Class
//!
//! @details 風船の生成Class
//************************************************************
class BalloonFactory
{
//====================
// 関数
//====================
public:
	//----------------------------------------
	//! @brief 風船生成関数
	//! @details
	//! @param balloon_line_num 風船の線の数
	//! @param position         座標
	//! @retval Balloon* 風船
	//----------------------------------------
	Balloon* Create(unsigned balloon_line_num, Vector3D position);
};



#endif