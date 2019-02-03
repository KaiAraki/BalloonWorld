//================================================================================
//!	@file	 SceneStateNull.h
//!	@brief	 シーンステート空白Class
//! @details 
//!	@author  Kai Araki									@date 2019/02/01
//================================================================================
#ifndef	_SCENE_NULL_H_
#define _SCENE_NULL_H_



//****************************************
// インクルード文
//****************************************
#include "SceneBase.h"



//************************************************************														   
//! @brief   シーンステートClass
//!
//! @details シーンのステートClass
//************************************************************
class SceneStateNull : public SceneBase::StateBase
{
//====================
// 関数
//====================
public:
	//----------------------------------------
	//! @brief デストラクタ
	//! @details
	//! @param void なし
	//----------------------------------------
	virtual ~SceneStateNull();

	//----------------------------------------
	//! @brief 初期化関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	virtual void Init();

	//----------------------------------------
	//! @brief 終了関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	virtual void Uninit();

	//----------------------------------------
	//! @brief 更新関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	virtual void Update();

	//----------------------------------------
	//! @brief リセット関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	virtual void Reset();
};



#endif