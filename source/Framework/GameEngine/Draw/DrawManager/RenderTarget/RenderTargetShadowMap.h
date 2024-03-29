//================================================================================
//!	@file	 RenderTargetShadowMap.h
//!	@brief	 レンダーターゲットシャドウマップClass
//! @details 
//!	@author  Kai Araki									@date 2019/02/20
//================================================================================
#ifndef	_RENDER_TARGET_SHADOW_MAP_H_
#define _RENDER_TARGET_SHADOW_MAP_H_



//****************************************
// インクルード文
//****************************************
#include "../../Camera/Camera.h"



//****************************************
// クラス宣言
//****************************************
class DrawBase;
class DrawCommonData;
class ShaderManager;



//************************************************************														   
//! @brief   レンダーターゲットシャドウマップClass
//!
//! @details レンダーターゲットシャドウマップのClass
//************************************************************
class RenderTargetShadowMap
{
//====================
// 定数
//====================
public:
	static const unsigned ARRAY_NUM = 10000;	//!< 配列数


//====================
// 変数
//====================
private:
	LimitedPointerArray<DrawBase*, ARRAY_NUM> draw_;		//!< 描画基底クラス配列

	Camera* camera_ = nullptr;					//!< カメラ
	Camera::Type save_camera_type_;				//!< 保存用カメラタイプ
	DrawCommonData* common_data_ = nullptr;		//!< 描画共通データ
	ShaderManager* shader_manager_ = nullptr;	//!< シェーダーマネージャ


//====================
// プロパティ
//====================
public:
	//----------------------------------------
	//! @brief カメラ設定関数
	//! @details
	//! @param *value カメラ
	//! @retval void なし
	//----------------------------------------
	void setCamera(Camera* value);

	//----------------------------------------
	//! @brief 描画共通データ設定関数
	//! @details
	//! @param *value 描画共通データ
	//! @retval void なし
	//----------------------------------------
	void setDrawCommonData(DrawCommonData* value);

	//----------------------------------------
	//! @brief シェーダーマネージャ設定関数
	//! @details
	//! @param value シェーダーマネージャ
	//! @retval void なし
	//----------------------------------------
	void setShaderManager(ShaderManager* value);


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
	//! @brief シーン変更時の終了関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void UninitWhenChangeScene();

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
	//! @brief 描画関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Draw();

	//----------------------------------------
	//! @brief 描画基底クラスの追加関数
	//! @details
	//! @param draw 描画基底クラス
	//! @retval void なし
	//----------------------------------------
	void AddDrawBaseToArray(DrawBase* draw);

	//----------------------------------------
	//! @brief リセット関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Reset();

private:
	//----------------------------------------
	//! @brief ビルボード用行列変更関数
	//! @details
	//! @param draw 描画基底クラス
	//! @retval void なし
	//----------------------------------------
	void ChangeBillboardMatrix(DrawBase* draw);
	
	//----------------------------------------
	//! @brief 全ビルボード更新関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void AllBillboardUpdate();

	//----------------------------------------
	//! @brief カメラタイプ変更関数
	//! @details
	//! @param camera_type カメラタイプ
	//! @retval void なし
	//----------------------------------------
	void ChangeCameraType(Camera::Type camera_type);
};



#endif
