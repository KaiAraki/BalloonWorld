//================================================================================
//!	@file	 SceneManager.h
//!	@brief	 シーンマネージャClass
//! @details 
//!	@author  Kai Araki									@date 2018/11/01
//================================================================================
#ifndef	_SCENE_MANAGER_H_
#define _SCENE_MANAGER_H_



//****************************************
// インクルード文
//****************************************
#include "../../Draw/DrawManager/Fade.h"
#include "../SceneBase.h"



//************************************************************														   
//! @brief   シーンマネージャClass
//!
//! @details シーンのマネージャClass
//************************************************************
class SceneManager
{
//====================
// クラス
//====================
public:
	//****************************************														   
	//! @brief   シーン間共通データClass
	//!
	//! @details シーン間の共通データClass
	//****************************************
	class CommonData
	{
	//====================
	// 変数
	//====================
	private:
		
		bool is_clear_;		//!< ゲームをクリアしたかフラグ
		int score_;			//!< スコア

	//====================
	// プロパティ
	//====================
	public:
		//----------------------------------------
		//! @brief クリアフラグ取得関数
		//! @details
		//! @param void なし
		//! @retval bool クリアの有無
		//----------------------------------------
		bool getIsClear();

		//----------------------------------------
		//! @brief クリアフラグ設定関数
		//! @details
		//! @param value クリアフラグ
		//! @retval void なし
		//----------------------------------------
		void setIsClear(bool value);

		//----------------------------------------
		//! @brief スコア取得関数
		//! @details
		//! @param void なし
		//! @retval int スコア
		//----------------------------------------
		int getScore();

		//----------------------------------------
		//! @brief スコア設定関数
		//! @details
		//! @param value スコア
		//! @retval void なし
		//----------------------------------------
		void setScore(int value);
		
	//====================
	// 関数
	//====================
	public:
		//----------------------------------------
		//! @brief コンストラクタ
		//! @details
		//! @param void なし
		//----------------------------------------
		CommonData();

		//----------------------------------------
		//! @brief デストラクタ
		//! @details
		//! @param void なし
		//----------------------------------------
		~CommonData();

		//----------------------------------------
		//! @brief 初期化関数
		//! @details
		//! @param void なし
		//! @retval void なし
		//----------------------------------------
		void Init();
	};


//====================
// 列挙型定義
//====================
public:
	// ステート
	enum State
	{
		NONE = -1,
		CHANGE_SCENE,
		RESET_SCENE,
		MAX
	};


//====================
// 定数
//====================
private:
	static const Fade::Type DEFAULT_FADE_TYPE;	//!< 初期フェードタイプ
	static const float   DEFAULT_FADE_SPEED;	//!< 初期フェード速度
	static const XColor4 DEFAULT_FADE_COLOR;	//!< 初期フェード色


//====================
// 変数
//====================
private:
	State state_;					//!< シーンマネージャステート
	CommonData* common_data_;		//!< シーン間共通データ
	SceneBase* current_scene_;		//!< 現在のシーン
	SceneBase* next_scene_;			//!< 次のシーン
	bool is_fade_;					//!< フェード中フラグ
	Fade::Type fade_type_;			//!< フェードタイプ
	float fade_speed_;				//!< フェード速度
	XColor4 fade_color_;			//!< フェード色


//====================
// プロパティ
//====================
public:
	//----------------------------------------
	//! @brief 次のシーンポインタ設定関数
	//! @details
	//! @param *value 次のシーンポインタ
	//! @retval void なし
	//----------------------------------------
	void setNextScene(SceneBase* value);

	//----------------------------------------
	//! @brief リセット設定関数
	//! @details
	//! @param *value シーンステート
	//! @retval void なし
	//----------------------------------------
	void setResetScene(SceneBase::StateBase* value);

	//----------------------------------------
	//! @brief 共通データポインタ取得関数
	//! @details
	//! @param void なし
	//! @retval CommonData* 共通データポインタ
	//----------------------------------------
	CommonData* getpCommonData();
	
	//----------------------------------------
	//! @brief フェード中フラグ取得関数
	//! @details
	//! @param void なし
	//! @retval bool フェード中の有無
	//----------------------------------------
	bool getIsFade();

	//----------------------------------------
	//! @brief フェードタイプ設定関数
	//! @details
	//! @param value フェードタイプ
	//! @retval void なし
	//----------------------------------------
	void setFadeType(Fade::Type value);
	
	//----------------------------------------
	//! @brief フェード速度設定関数
	//! @details
	//! @param value フェード速度
	//! @retval void なし
	//----------------------------------------
	void setFadeSpeed(float value);
	
	//----------------------------------------
	//! @brief フェード色設定関数
	//! @details
	//! @param value フェード色
	//! @retval void なし
	//----------------------------------------
	void setFadeColor(XColor4 value);


//====================
// 関数
//====================
public:
	//----------------------------------------
	//! @brief コンストラクタ
	//! @details
	//! @param void なし
	//----------------------------------------
	SceneManager();

	//----------------------------------------
	//! @brief デストラクタ
	//! @details
	//! @param void なし
	//----------------------------------------
	~SceneManager();

	//----------------------------------------
	//! @brief 初期化関数
	//! @details
	//! @param *scene 最初のシーン
	//! @retval void なし
	//----------------------------------------
	void Init(SceneBase* scene);

	//----------------------------------------
	//! @brief 終了関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Uninit();

	//----------------------------------------
	//! @brief 更新関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Update();

	//----------------------------------------
	//! @brief シーン更新関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void UpdateScene();

	//----------------------------------------
	//! @brief シーン描画関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void DrawScene();

	

private:
	//----------------------------------------
	//! @brief シーン変更関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void SceneChange();

	//----------------------------------------
	//! @brief シーンリセット関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void SceneReset();
};



#endif