#ifndef WIDGET_COMPASS_H_
#define WIDGET_COMPASS_H_

#include "application.h"

class WidgetCompass : public WidgetBaseClass
{
    public:
        WidgetCompass(uint8_t ucItem = 0);
        ~WidgetCompass();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayAngle(uint16_t ucVal);

    private:
        char pDataAngleTopic[64];
        uint8_t _Item = 0;

        void (*_EventCb)(void);
        void widgetBaseCallBack(uint8_t *payload, uint32_t len);
};

#endif
