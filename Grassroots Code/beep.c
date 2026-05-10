#include <reg52.h>
#include "beep.h"

sbit BEEP = P0^7;
int BEEP_ON=0;
int BEEP_OFF =1;

void beep_controll(int beep_onoff)
    {
        if (beep_onoff==0)
        {
            BEEP=BEEP_ON;
        }
        else
        {
            BEEP=BEEP_OFF;
        }
    }
    