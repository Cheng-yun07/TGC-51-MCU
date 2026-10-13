#include <reg51.h>
sbit S1=P3^1;
sbit S2=P3^3;
sbit D1=P2^0;
sbit D2=P2^7;
sbit beep=P2^5;
void delay (unsigned int i)
{
    unsigned int k;
    for(k=0;k<i;k++);
}
void main()
{
 D1=0;
 D2=1;
 beep=1;
 while(1)
 {
  if(S1==0)
  {
   delay(2000);
   if(S1==0)
   {
   while(S1==0);
   while(1)
    {
    if(S2==0)
	break;
    D2=0;
    beep=0;
    delay(3000);
    if(S2==0) 
	break;
    D2=1;
    beep=1;
    delay(3000);
    }
     D2=1;
     beep=1;
   }
  }
 }
}