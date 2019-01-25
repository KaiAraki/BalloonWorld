//================================================================================
//
//    フィールドファクトリークラス
//    Author : Araki Kai                                作成日 : 2018/07/23
//
//================================================================================

#ifndef	_FIELD_FACTORY_H_
#define _FIELD_FACTORY_H_



//======================================================================
//
// インクルード文
//
//======================================================================

#include "../Field.h"
#include "../FieldDraw/FieldDraw.h"



//======================================================================
//
// クラス定義
//
//======================================================================

class FieldFactory
{
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public :
	// メンバ関数
	Field* Create()
	{
		Field* temp = new Field();

		// 初期化
		temp->Init(new FieldDraw());

		return temp;
	}
};



#endif