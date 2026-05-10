#include <reg52.h>
#include "motor.h"
#include "delay.h"

sbit left_a = P0^0;
sbit left_b = P0^1;
sbit right_a = P0^2;
sbit right_b = P0^3;

void move_front()
{
    left_a=1;
    left_b=0;
    right_a=1;
    right_b=0;
}

void move_back()
{
    left_a=0;
    left_b=1;
    right_a=0;
    right_b=1;
}

void move_left()
{
    left_a=0;
    left_b=0;
    right_a=1;
		right_b=0;   
}

void move_right()
{
    left_a=1;
    left_b=0; 
    right_a=0;
		right_b=0;
}

void move_very_left()
{
    left_a=0;
    left_b=1;
    right_a=1;
    right_b=0;
}

void move_very_right()
{
    left_a=1;
    left_b=0;
    right_a=0;
    right_b=1;
}

void move_stop()
{
	  left_a=0;
    left_b=0;
    right_a=0;
    right_b=0;
}
