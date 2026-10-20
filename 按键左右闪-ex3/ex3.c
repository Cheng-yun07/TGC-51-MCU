#include <reg51.h>
sbit LED_Left_1 = P2^0;
sbit LED_Left_2 = P2^1;
sbit LED_Left_3 = P2^2;
sbit LED_Right_1 = P2^5;
sbit LED_Right_2 = P2^6;
sbit LED_Right_3 = P2^7;
sbit S_L = P3^1;
sbit S_R = P3^3;
sbit S_Double = P3^0;

void delay (unsigned int i)
{
	unsigned int k;
	for(k=0;k<i;k++);
}
void main ()
{
while(1)
 {
 	if((S_L == 0 && S_R  == 0) || S_Double == 0)
	{
	 LED_Left_1 = 0;
	 LED_Left_2 = 0;
	 LED_Left_3 = 0;
	 LED_Right_1 = 0;
	 LED_Right_2 = 0;
	 LED_Right_3 = 0;
	 delay(25000);
	 LED_Left_1 = 1;
	 LED_Left_2 = 1;
	 LED_Left_3 = 1;
	 LED_Right_1 = 1;
	 LED_Right_2 = 1;
	 LED_Right_3 = 1;
	 delay(25000);
	}
	 else if(S_L == 0)
	 {
	  LED_Left_1 = 0;
	  LED_Left_2 = 0;
	  LED_Left_3 = 0;
	  delay(25000);
	  LED_Left_1 = 1;
	  LED_Left_2 = 1;
	  LED_Left_3 = 1;
	  delay(25000);
	 }
	  else if(S_R == 0)
	  {
	   LED_Right_1 = 0;
	   LED_Right_2 = 0;
	   LED_Right_3 = 0;
	   delay(25000);
	   LED_Right_1 = 1;
	   LED_Right_2 = 1;
	   LED_Right_3 = 1;
	   delay(25000);
	  }
	   else
	   {
	    LED_Left_1 = 1;
	    LED_Left_2 = 1;
	    LED_Left_3 = 1;
	    LED_Right_1 = 1;
	    LED_Right_2 = 1;
	    LED_Right_3 = 1;
	   }

 }
}