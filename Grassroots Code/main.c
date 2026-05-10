#include <reg52.h>
#include "delay.h"
#include "led.h"
#include "beep.h"
#include "motor.h"
#include "track.h"
#include "obavoid.h"
#include "blueteeth.h"

void main()
{
		blue_init();
    while (1)
    {
			blue_controll();
    }

}