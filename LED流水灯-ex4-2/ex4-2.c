#include <reg51.h>
#include <intrins.h>
void delay (unsigned int i)
{
 unsigned int k;
 for(k=0;k<i;k++);
}
void main()
{
 unsigned char i;
  while(1)
  {
   P2=0xff;
   delay(5000);
   for(i=0;i<8;i++)
   {
    P2=_crol_(P2,1)-1;
    delay(5000);
   }
   for(i=0;i<8;i++)
   {
    P2=_crol_(P2,1)+1;
    delay(5000);
   }
  }
}

