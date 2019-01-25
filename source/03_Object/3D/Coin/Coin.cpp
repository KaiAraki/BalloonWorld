//================================================================================
//
//    コインクラス
//    Author : Araki Kai                                作成日 : 2018/07/24
//
//================================================================================



//======================================================================
//
// インクルード文
//
//======================================================================

#include "Coin.h"



//======================================================================
//
// 非静的メンバ関数定義
//
//======================================================================

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// [ 初期化関数 ]
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void Coin::Init(DrawBase*      draw,
				CollisionBase* collision)
{
	// プレーンポリゴンの生成
	polygon_ = new PlanePolygon();

	// 基底クラスの初期化
	GameObjectBase::Init(nullptr, draw, collision);
}



//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// [ 終了処理関数 ]
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void Coin::Uninit()
{
	// 基底クラスの終了処理
	GameObjectBase::Uninit();

	// 各種消去
	SafeRelease::Normal(&polygon_);
}



//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
// [ Reset処理関数 ]
//
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void Coin::Reset()
{

}