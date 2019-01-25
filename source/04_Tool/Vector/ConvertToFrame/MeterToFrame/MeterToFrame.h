//================================================================================
//
//    移動単位とフレーム変換ヘッダ
//    Author : Araki Kai                                作成日 : 2017/08/23
//
//================================================================================

#ifndef	_METER_TO_FRAME_H_
#define _METER_TO_FRAME_H_



//**********************************************************************
//
// インクルード文
//
//**********************************************************************

#include <math.h>

#include "../TimeToFrame/TimeToFrame.h"



//**********************************************************************
//
// インライン関数宣言
//
//**********************************************************************

//================================================================================
//
// [ メートル→メートル変換関数( メートル基準 ) ]
//
//================================================================================

inline float Meter_To_Meter(float meter)
{
	return meter;
}



//================================================================================
//
// [ センチメートル→メートル変換関数( メートル基準 ) ]
//
//================================================================================

inline float Centimeter_To_Meter(float centiMeter)
{
	const float tempMeter = centiMeter * 0.01f;

	return Meter_To_Meter(tempMeter);
}



//================================================================================
//
// [ ミリメートル→メートル変換関数( メートル基準 ) ]
//
//================================================================================

inline float Millimeter_To_Meter(float milliMeter)
{
	const float tempCentiMeter = milliMeter * 0.1f;

	return Centimeter_To_Meter(tempCentiMeter);
}



//================================================================================
//
// [ キロメートル→メートル変換関数( メートル基準 ) ]
//
//================================================================================

inline float Kilometer_To_Meter(float kiloMeter)
{
	const float tempMeter = kiloMeter * 1000.0f;

	return Meter_To_Meter(tempMeter);
}



//================================================================================
//
// [ m/s→m/f変換関数( メートル基準 ) ]
//
//================================================================================

inline float MeterPerSecond_To_MeterPerFlame(float speed)
{
	return Meter_To_Meter(speed) / Second_To_Frame(1.0f);
}



//================================================================================
//
// [ km/h→m/f変換関数( メートル基準 ) ]
//
//================================================================================

inline float KilometerPerHour_To_MeterPerFlame(float speed)
{
	return Kilometer_To_Meter(speed) / Hour_To_Frame(1.0f);
}



//================================================================================
//
// [ m/s^2→m/f^2変換関数( メートル基準 ) ]
//
//================================================================================

inline float MeterPerSecondSquared_To_MeterPerFrameSquared(float acceleration)
{
	return Meter_To_Meter(acceleration) / (Second_To_Frame(1.0f) * Second_To_Frame(1.0f));
}



#endif