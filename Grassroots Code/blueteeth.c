#include <reg52.h>
#include "blueteeth.h"
#include "motor.h"
#include "track.h"

//自定义蓝牙命令的数据变量
unsigned char blueteeth_cmd=0x00;

void blue_init(void)
{
    SCON=0x50;
    PCON &= ~0x80;
    TMOD &= 0x0f;
    TMOD |= 1<<5;
    TH1=0xFD;
    TL1=0xFD;
    TR1=1;
    EA=1;
    ES=1;
}

//四号中断：串口中断
//RI等于1:串口收到数据
void blue_break() interrupt 4
{
    if(RI==1)
    {
        blueteeth_cmd=SBUF;
        RI=0;
    }
}

void blue_controll(void)
{
    while(1)
    {
        if(blueteeth_cmd==BLUE_FRONT)
        {
            move_front();
        }
        else if(blueteeth_cmd==BLUE_LEFT)
        {
            move_left();
        }
        else if(blueteeth_cmd==BLUE_RIGHT)
        {
            move_right();
        }
        else if(blueteeth_cmd==BLUE_STOP)
        {
            move_stop();
        }
				else if(blueteeth_cmd==BLUE_BACK)
				{
						move_back();
				}
				else if(blueteeth_cmd==BLUE_TRACK)
				{
						track();
				}
    }
}

