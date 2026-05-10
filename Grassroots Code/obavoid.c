#include <reg52.h>
#include "motor.h"
#include "track.h"
#include "obavoid.h"
#include "delay.h"

sbit oL  = P1^0;
sbit oR  = P1^1;
sbit oC  = P1^2;

//白色是灯亮
//往左拧会更灵敏

void obstacleavoid(void)
{
    unsigned char oaL,oaR,oaC;

    while(1)
    {
				oaL=oL;
			  oaR=oR;
        oaC=oC;

        if (oaC==black & oaC==black & oaC==black)
        {
            move_front();
						
        }
        else
        {
						move_back();
						delay_ms(400);
						move_stop();
					
					  move_very_left();
						delay_ms(500);
        }
		}   
}