//================================================================================
//!	@file	 Vector3D.h
//!	@brief	 3DベクトルClass
//! @details 
//!	@author  Kai Araki									@date 2017/11/21
//================================================================================
#ifndef	_VECTOR_3D_H_
#define _VECTOR_3D_H_



//****************************************
// インクルード文
//****************************************
#include <d3dx9.h>



//****************************************
// 型定義
//****************************************
using Vec = D3DVECTOR;
using Vec2 = D3DXVECTOR2;
using Vec3 = D3DXVECTOR3;
using Vec4 = D3DXVECTOR4;
using Float16 = D3DXFLOAT16;
using Quaternion = D3DXQUATERNION;
using MATRIX = D3DXMATRIX;
using Color4 = D3DCOLOR;
using XColor4 = D3DXCOLOR;



//************************************************************														   
//! @brief   3DベクトルClass
//!
//! @details 3DのベクトルClass
//************************************************************
class Vector3D : public Vec3
{
//====================
// static関数
//====================
public:
	//----------------------------------------
	//! @brief 内積生成関数
	//! @details
	//! @param *vector0 ベクトル0
	//! @param *vector1 ベクトル1
	//! @retval float 内積値
	//----------------------------------------
	static float CreateDot(Vec3* vector0, Vec3* vector1);

	//----------------------------------------
	//! @brief 3点から内積生成関数
	//! @details
	//! @param *point0 点0
	//! @param *point1 点1
	//! @param *point2 点2
	//! @retval float 内積値
	//----------------------------------------
	static float CreateDotPoint3(Vec3* point0, Vec3* point1, Vec3* point2);

	//----------------------------------------
	//! @brief 外積生成関数
	//! @details
	//! @param *vector0 ベクトル0
	//! @param *vector1 ベクトル1
	//! @retval Vec3 外積値
	//----------------------------------------
	static Vec3 CreateCross(Vec3* vector0, Vec3* vector1);

	//----------------------------------------
	//! @brief 3点から外積生成関数
	//! @details
	//! @param *point0 点0
	//! @param *point1 点1
	//! @param *point2 点2
	//! @retval Vec3 外積値
	//----------------------------------------
	static Vec3 CreateCrossPoint3(Vec3* point0, Vec3* point1, Vec3* point2);

	//----------------------------------------
	//! @brief ラジアン角度生成関数
	//! @details
	//! @param *vector0 ベクトル0
	//! @param *vector1 ベクトル1
	//! @retval float ラジアン角度
	//----------------------------------------
	static float CreateAngleRadian(Vec3* vector0, Vec3* vector1);

	//----------------------------------------
	//! @brief デグリー角度生成関数
	//! @details
	//! @param *vector0 ベクトル0
	//! @param *vector1 ベクトル1
	//! @retval float デグリー角度
	//----------------------------------------
	static float CreateAngleDegree(Vec3* vector0, Vec3* vector1);


//====================
// プロパティ
//====================
public:
	//----------------------------------------
	//! @brief Xの2乗取得関数
	//! @details
	//! @param void なし
	//! @retval float Xの2乗
	//----------------------------------------
	float getSquareX();

	//----------------------------------------
	//! @brief Yの2乗取得関数
	//! @details
	//! @param void なし
	//! @retval float Yの2乗
	//----------------------------------------
	float getSquareY();

	//----------------------------------------
	//! @brief Zの2乗取得関数
	//! @details
	//! @param void なし
	//! @retval float Zの2乗
	//----------------------------------------
	float getSquareZ();

	//----------------------------------------
	//! @brief 長さ取得関数
	//! @details
	//! @param void なし
	//! @retval float 長さ
	//----------------------------------------
	float getLength();

	//----------------------------------------
	//! @brief 長さの2乗取得関数
	//! @details
	//! @param void なし
	//! @retval float 長さの2乗
	//----------------------------------------
	float getLengthSquare();

	//----------------------------------------
	//! @brief Xの長さ取得関数
	//! @details
	//! @param void なし
	//! @retval float Xの長さ
	//----------------------------------------
	float getLengthX();

	//----------------------------------------
	//! @brief Yの長さ取得関数
	//! @details
	//! @param void なし
	//! @retval float Yの長さ
	//----------------------------------------
	float getLengthY();

	//----------------------------------------
	//! @brief Zの長さ取得関数
	//! @details
	//! @param void なし
	//! @retval float Zの長さ
	//----------------------------------------
	float getLengthZ();

	//----------------------------------------
	//! @brief XYの長さ取得関数
	//! @details
	//! @param void なし
	//! @retval float XYの長さ
	//----------------------------------------
	float getLengthXY();

	//----------------------------------------
	//! @brief XZの長さ取得関数
	//! @details
	//! @param void なし
	//! @retval float XZの長さ
	//----------------------------------------
	float getLengthXZ();

	//----------------------------------------
	//! @brief YZの長さ取得関数
	//! @details
	//! @param void なし
	//! @retval float YZの長さ
	//----------------------------------------
	float getLengthYZ();


//====================
// 演算子
//====================
public:
	//----------------------------------------
	//! @brief <演算子
	//! @details
	//! @param void なし
	//! @retval bool 判定の有無
	//----------------------------------------
	bool operator < (Vector3D& vector);

	//----------------------------------------
	//! @brief >演算子
	//! @details
	//! @param void なし
	//! @retval bool 判定の有無
	//----------------------------------------
	bool operator > (Vector3D& vector);

	//----------------------------------------
	//! @brief <=演算子
	//! @details
	//! @param void なし
	//! @retval bool 判定の有無
	//----------------------------------------
	bool operator <= (Vector3D& vector);

	//----------------------------------------
	//! @brief >=演算子
	//! @details
	//! @param void なし
	//! @retval bool 判定の有無
	//----------------------------------------
	bool operator >= (Vector3D& vector);

//====================
// 関数
//====================
public:
	//----------------------------------------
	//! @brief コンストラクタ関数
	//! @details
	//! @param void なし
	//----------------------------------------
	Vector3D();

	//----------------------------------------
	//! @brief 単一floatコンストラクタ関数
	//! @details
	//! @param num X,Y,Z値
	//----------------------------------------
	Vector3D(const float* num);

	//----------------------------------------
	//! @brief 単一float16コンストラクタ関数
	//! @details
	//! @param num X,Y,Z値
	//----------------------------------------
	Vector3D(const Float16* num);

	//----------------------------------------
	//! @brief 複数floatコンストラクタ関数
	//! @details
	//! @param num_x X値
	//! @param num_y Y値
	//! @param num_z Z値
	//----------------------------------------
	Vector3D(float num_x, float num_y, float num_z);

	//----------------------------------------
	//! @brief ベクターコンストラクタ関数
	//! @details
	//! @param vector X,Y,Z値
	//----------------------------------------
	Vector3D(const Vec& vector);

	//----------------------------------------
	//! @brief デストラクタ関数
	//! @details
	//! @param void なし
	//----------------------------------------
	virtual ~Vector3D();

	//----------------------------------------
	//! @brief リセット関数
	//! @details
	//! @param void なし
	//! @retval void なし
	//----------------------------------------
	void Reset();

	//----------------------------------------
	//! @brief 正規化関数
	//! @details
	//! @param void なし
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* ChangeNormalize();

	//----------------------------------------
	//! @brief 任意の長さに変更関数
	//! @details
	//! @param length 長さ
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* ChangeAnyLength(float length);

	//----------------------------------------
	//! @brief Xを任意の長さに変更関数
	//! @details
	//! @param length 長さ
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* ChangeAnyLengthX(float length);

	//----------------------------------------
	//! @brief Yを任意の長さに変更関数
	//! @details
	//! @param length 長さ
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* ChangeAnyLengthY(float length);

	//----------------------------------------
	//! @brief Zを任意の長さに変更関数
	//! @details
	//! @param length 長さ
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* ChangeAnyLengthZ(float length);

	//----------------------------------------
	//! @brief XYを任意の長さに変更関数
	//! @details
	//! @param length 長さ
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* ChangeAnyLengthXY(float length);

	//----------------------------------------
	//! @brief XZを任意の長さに変更関数
	//! @details
	//! @param length 長さ
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* ChangeAnyLengthXZ(float length);

	//----------------------------------------
	//! @brief YZを任意の長さに変更関数
	//! @details
	//! @param length 長さ
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* ChangeAnyLengthYZ(float length);

	//----------------------------------------
	//! @brief X軸回転関数
	//! @details
	//! @param radian 角度
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* RotationAxisX(float radian);

	//----------------------------------------
	//! @brief Y軸回転関数
	//! @details
	//! @param radian 角度
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* RotationAxisY(float radian);

	//----------------------------------------
	//! @brief Z軸回転関数
	//! @details
	//! @param radian 角度
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* RotationAxisZ(float radian);

	//----------------------------------------
	//! @brief 任意軸回転関数
	//! @details
	//! @param radian 角度
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* RotationAxisAny(Vec3 axis, float radian);

	//----------------------------------------
	//! @brief 行列回転関数
	//! @details
	//! @param rotation_matrix 行列
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* RotationMatrix(MATRIX* rotation_matrix);

	//----------------------------------------
	//! @brief クォータニオン回転回転関数
	//! @details
	//! @param quaternion クォータニオン
	//! @retval Vec3* 変更後ベクトル
	//----------------------------------------
	Vec3* RotationQuaternion(Quaternion* quaternion);
};



#endif