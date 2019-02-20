//================================================================================
//!	@file	 ScaffoldFactory.h
//!	@brief	 足場生成Class
//! @details 
//!	@author  Kai Araki									@date 2019/02/20
//================================================================================
#ifndef	_SCAFFOLD_FACTORY_H_
#define _SCAFFOLD_FACTORY_H_



//****************************************
// インクルード文
//****************************************
#include "Scaffold.h"
#include "ScaffoldDraw.h"
#include "ScaffoldCollision.h"



//************************************************************														   
//! @brief   足場生成Class
//!
//! @details 足場の生成Class
//************************************************************
class ScaffoldFactory
{
//====================
// 関数
//====================
public:
	//----------------------------------------
	//! @brief 足場生成関数
	//! @details
	//! @param void なし
	//! @retval Scaffold* 足場
	//----------------------------------------
	Scaffold* Create();
};



#endif