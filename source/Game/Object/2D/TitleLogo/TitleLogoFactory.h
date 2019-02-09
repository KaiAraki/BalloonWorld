//================================================================================
//!	@file	 TitleLogoFactory.h
//!	@brief	 �^�C�g�����S����Class
//! @details 
//!	@author  Kai Araki									@date 2018/06/19
//================================================================================
#ifndef	_TITLE_LOGO_FACTORY_H_
#define _TITLE_LOGO_FACTORY_H_



//****************************************
// �C���N���[�h��
//****************************************
#include "TitleLogo.h"
#include "TitleLogoDraw.h"



//************************************************************														   
//! @brief   �^�C�g�����S����Class
//!
//! @details �^�C�g�����S�̐���Class
//************************************************************
class TitleLogoFactory
{
//====================
// �֐�
//====================
public:
	//----------------------------------------
	//! @brief �^�C�g�����S�����֐�
	//! @details
	//! @param void �Ȃ�
	//! @retval TitleLogo* �^�C�g�����S
	//----------------------------------------
	TitleLogo* Create();
};



#endif