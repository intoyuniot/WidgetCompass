/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
根据磁力计计算方向角度

所需器件:
1.磁力计模块

*/

/*该头文件引用由IntoRobot自动添加.*/
#include <WidgetCompass.h>

WidgetCompass compass;

uint16_t angle = 189;

void setup() 
{
// put your setup code here, to run once.
    compass.begin();
}

void loop() 
{
// put your main code here, to run repeatedly.
    compass.displayAngle(angle);
    delay(2000);
}
