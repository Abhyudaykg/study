#include<reg51.h>
#include"keypad.h"

main()
{
unsigned char temp;

while(1)
{
	temp=keyscan();
	P1=temp^0x0f;
}
}