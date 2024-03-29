//================================================================================
//!	@file	 UpdateManager.h
//!	@brief	 更新マネージャーClass
//! @details 
//!	@author  Kai Araki									@date 2019/01/19
//================================================================================
#ifndef	_UPDATE_MANAGER_H_
#define _UPDATE_MANAGER_H_



//****************************************
// クラス宣言
//****************************************
class GameObjectBase;



//************************************************************														   
//! @brief   更新マネージャーlass
//!
//! @details 登録されている更新基底クラスを管理するClass
//************************************************************
class UpdateManager
{
//====================
// 定数
//====================
public:
	static const unsigned ARRAY_NUM = 10000;		//!< 配列数


//====================
// 変数
//====================
private:
	LimitedPointerArray<GameObjectBase*, ARRAY_NUM> all_object_;	//!< 全更新配列
	LimitedPointerArray<GameObjectBase*, ARRAY_NUM> await_add_;		//!< 追加待ち配列
	LimitedPointerArray<GameObjectBase*, ARRAY_NUM> await_release_;	//!< 解放待ち配列


//====================
// 関数
//====================
public:
	//----------------------------------------
	//! @brief 初期化関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Init();

	//----------------------------------------
	//! @brief 終了関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Uninit();

	//----------------------------------------
	//! @brief シーン変更時の終了関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void UninitWhenChangeScene();

	//----------------------------------------
	//! @brief 更新関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Update();

	//----------------------------------------
	//! @brief 更新基底クラスの追加関数
	//! @details
	//! @param *update 更新基底クラス
	//! @retval void なし
	//----------------------------------------
	void AddGameObjectBase(GameObjectBase* update);

	//----------------------------------------
	//! @brief 更新基底クラスの解放関数
	//! @details
	//! @param *update 更新基底クラス
	//! @retval void なし
	//----------------------------------------
	void ReleaseGameObjectBase(GameObjectBase* update);

private:
	//----------------------------------------
	//! @brief 追加待ち配列の中身を追加関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void AddContentsOfAwaitAddArray();

	//----------------------------------------
	//! @brief 解放待ち配列の中身を解放関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void ReleaseContentsOfAwaitReleaseArray();
};



#endif
