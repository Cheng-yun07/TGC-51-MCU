#include <reg51.h>
sbit beep = P2^5;
void delay (unsigned int i)
{
	unsigned int k;
	for (k=0;k<i;k++);
}
void main ()
 {
	while (1)
		{
		 beep = 0;
		 delay (40);
		 beep = 1;
		 delay (40);
		}
 }