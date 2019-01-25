//================================================================================
//
//    チュートリアルロゴファクトリークラス
//    Author : Araki Kai                                作成日 : 2018/09/02
//
//================================================================================

#ifndef	_TUTORIAL_LOGO_FACTORY_H_
#define _TUTORIAL_LOGO_FACTORY_H_



//======================================================================
//
// インクルード文
//
//======================================================================

#include "../TutorialLogo.h"
#include "../TutorialLogoDraw/TutorialLogoDraw.h"



//======================================================================
//
// クラス定義
//
//======================================================================

class TutorialLogoFactory
{
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public :
	// メンバ関数
	TutorialLogo* Create()
	{
		TutorialLogo* temp = new TutorialLogo();

		// 初期化
		temp->Init(new TutorialLogoDraw());

		return temp;
	}
};



#endif