#include <reg52.h>
#include "track.h"
#include "motor.h"
#include "delay.h"

sbit left  = P0^4;
sbit right = P0^5;
sbit center= P0^6;


void track(void)
{
    unsigned char L,C,R;

    while(1)
    {
        L=left;
        C=center;
        R=right;

        if (L==white & C==white & R==white)
        {
            move_front();    
        }
				else if (L==black & C==white & R==black)
				{
						move_front();
				}
				else if (L==white & C==black & R==white)
				{
					  move_front();
				}
        else if (L==black & C==black & R==black)
        {
            move_stop();    
        }

        else if (L==black & C==white & R==white)
        {
						move_stop();
						delay_ms(30);
            move_left();
						delay_ms(140);
        }

        else if (L==black & C==black & R==white)
        {
            move_very_left();    
        }
				else if (L==white & C==white & R==black)
				{
						move_stop();
						delay_ms(30);
						move_right();
						delay_ms(140);
				}
				else if  (L==white & C==black & R==black)
				{
					  move_very_right();
				}
    }


}
