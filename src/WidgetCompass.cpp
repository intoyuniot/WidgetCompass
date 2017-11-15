#include "WidgetCompass.h"


WidgetCompass::WidgetCompass(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataAngleTopic,0,sizeof(pDataAngleTopic));
    sprintf(pDataAngleTopic,"channel/compass_%d/data/angle",_Item);
}

WidgetCompass::~WidgetCompass()
{

}

void WidgetCompass::begin(void (*UserCallBack)(void))
{
}


void WidgetCompass::displayAngle(uint16_t ucVal)
{
    IntoRobot.publish(pDataAngleTopic,ucVal);
}


void WidgetCompass::widgetBaseCallBack(uint8_t *payload, uint32_t len)
{
}

