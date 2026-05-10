#ifndef __BLUETEETH_H__
#define __BLUETEETH_H__

#define BLUE_FRONT  0x01
#define BLUE_LEFT   0x02
#define BLUE_RIGHT  0x03
#define BLUE_STOP   0x04
#define BLUE_BACK   0x05
#define BLUE_TRACK  0x99

void blue_controll(void);
void blue_init(void);

#endif