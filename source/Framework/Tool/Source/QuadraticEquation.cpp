//================================================================================
//!	@file	 QuadraticEquation.cpp
//!	@brief	  �񎟕�����Class
//! @details 
//!	@author  Kai Araki									@date 2017/12/12
//================================================================================



//****************************************
// �C���N���[�h��
//****************************************
#include "../QuadraticEquation.h"



//****************************************
// �v���p�e�B��`
//****************************************
float* QuadraticEquation::getpA()
{
	return &a_;
}



float* QuadraticEquation::getpB()
{
	return &b_;
}



float* QuadraticEquation::getpC()
{
	return &c_;
}



float* QuadraticEquation::getpD()
{
	return &d_;
}



//****************************************
// �֐���`
//****************************************
void QuadraticEquation::CreateD()
{
	d_ = b_ * b_ - (4.0f * a_ * c_);
}



bool QuadraticEquation::CalculateTheSolutionFormula()
{
	CreateD();

	// ���̌������v�Z�\��
	if (d_ < 0.0f) return false;

	// ���̌���������
	d_ = sqrtf(d_);

	t0_ = (-b_ + d_) / (2.0f * a_);
	t1_ = (-b_ - d_) / (2.0f * a_);

	return true;
}