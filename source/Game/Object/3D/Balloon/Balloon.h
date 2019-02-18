//================================================================================
//!	@file	 Balloon.h
//!	@brief	 風船Class
//! @details 
//!	@author  Kai Araki									@date 2019/02/05
//================================================================================
#ifndef	_BALLOON_H_
#define _BALLOON_H_



//****************************************
// インクルード文
//****************************************
#include <vector>

#include <GameEngine/GameObject/GameObjectNull.h>



//****************************************
// クラス定義
//****************************************
class BulletPhysicsObject;
class BulletPhysicsConstraint;



//************************************************************														   
//! @brief   風船Class
//!
//! @details 風船のClass
//************************************************************
class Balloon : public GameObjectNull
{
//====================
// 定数
//====================
public:
	static const float RISING_SPEED;			//!< 上昇速度
	static const Vec3 OBB_EDGE_LENGTH_HALF;		//!< OBBの辺の長さの半分
	static const float SPHERE_RADIUS;			//!< 球の半径


//====================
// 変数
//====================
private:
	std::vector<BulletPhysicsObject*> all_object_;				//!< 総オブジェクト
	std::vector<BulletPhysicsConstraint*> object_constraint_;	//!< オブジェクトの拘束

	
//====================
// プロパティ
//====================
public:
	//----------------------------------------
	//! @brief 総オブジェクト数取得関数
	//! @details
	//! @param void なし
	//! @retval int 総オブジェクト数
	//----------------------------------------
	int getAllObjectNum();

	//----------------------------------------
	//! @brief オブジェクトの拘束数取得関数
	//! @details
	//! @param void なし
	//! @retval unsigned 総オブジェクト数
	//----------------------------------------
	int getObjectConstraintNum();

	//----------------------------------------
	//! @brief オブジェクト取得関数
	//! @details
	//! @param index インデックス
	//! @retval BulletPhysicsObject* オブジェクト
	//----------------------------------------
	BulletPhysicsObject* getpObject(unsigned index);

	//----------------------------------------
	//! @brief オブジェクトの拘束取得関数
	//! @details
	//! @param index インデックス
	//! @retval BulletPhysicsConstraint* オブジェクトの拘束
	//----------------------------------------
	BulletPhysicsConstraint* getpObjectConstraint(unsigned index);

	//----------------------------------------
	//! @brief 座標取得関数
	//! @details
	//! @param void なし
	//! @retval Vec3 座標
	//----------------------------------------
	Vec3 getPosition();

	//----------------------------------------
	//! @brief 座標設定関数
	//! @details
	//! @param value 座標
	//! @retval void なし
	//----------------------------------------
	void setPosition(Vec3 value);

//====================
// 関数
//====================
public:
	//----------------------------------------
	//! @brief 初期化関数
	//! @details
	//! @param *draw            描画基底クラス
	//! @param balloon_line_num 風船の線の数
	//! @retval void なし
	//----------------------------------------
	void Init(DrawBase* draw, unsigned balloon_line_num);

	//----------------------------------------
	//! @brief 更新関数
	//! @details 
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Update() override;

	//----------------------------------------
	//! @brief 拘束解放関数
	//! @details
	//! @param index インデックス
	//! @retval void なし
	//----------------------------------------
	void ReleaseConstraint(unsigned index);

	//----------------------------------------
	//! @brief 基点拘束解放関数
	//! @details
	//! @param index インデックス
	//! @retval void なし
	//----------------------------------------
	void ReleaseBaseConstraint();

	//----------------------------------------
	//! @brief 速度追加関数
	//! @details
	//! @param velocity 速度
	//! @retval void なし
	//----------------------------------------
	void AddVelocity(Vec3 velocity);

	//----------------------------------------
	//! @brief 加速度追加関数
	//! @details
	//! @param acceleration 加速度
	//! @retval void なし
	//----------------------------------------
	void AddAcceleration(Vec3 acceleration);

private:
	//----------------------------------------
	//! @brief バレットオブジェクト初期化関数
	//! @details
	//! @param balloon_line_num 風船の線の数
	//! @retval void なし
	//----------------------------------------
	void InitBulletPhysicsObject(unsigned balloon_line_num);
};



#endif