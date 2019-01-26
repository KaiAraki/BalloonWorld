//================================================================================
//
//    �X�J�C�h�[���X�V�N���X
//    Author : Araki Kai                                �쐬�� : 2018/05/15
//
//================================================================================

#ifndef	_SKY_DOME_UPDATE_H_
#define _SKY_DOME_UPDATE_H_



//======================================================================
//
// �C���N���[�h��
//
//======================================================================

#include <Component/Update/UpdateNull/UpdateNull.h>



//======================================================================
//
// �N���X��`
//
//======================================================================

class SkyDomeUpdate : public UpdateNull
{
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public :
	// �萔
	static const float SCALE;


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public :
	// �����o�֐�
	void Init()		  override;
	void Uninit()	  override;
	void Update()	  override;
	void LateUpdate() override;
};



#endif