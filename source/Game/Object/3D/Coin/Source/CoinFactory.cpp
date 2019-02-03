//================================================================================
//!	@file	 CoinFactory.cpp
//!	@brief	 コイン生成Class
//! @details 
//!	@author  Kai Araki									@date 2018/07/24
//================================================================================



//****************************************
// インクルード文
//****************************************
#include "../CoinFactory.h"



//****************************************
// 関数定義
//****************************************
Coin* CoinFactory::Create()
{
	Coin* temp = new Coin();
	temp->Init(new CoinUpdate(), 
			   new CoinDraw(),
			   new CoinCollision());
	return temp;
}