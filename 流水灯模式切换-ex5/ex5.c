#include <reg51.h>
sbit S1=P3^1;
sbit S2=P3^0;
sbit S3=P3^2;
sbit S4=P3^3;
unsigned int i;
unsigned char temp;
void delay (unsigned int i)
 {
  unsigned int k;
  for(k=0;k<i;k++);
 }
void main()
{
 P2=0xff;
 while(1)
  {
   if(S1==0 && S3==0)
   {
   	delay(1500);
	if(S1==0 && S3==0)
	{
	 P2=0xff;
	}
   }else if(S1==0)
   {
   	delay(1500);
	if(S1==0)
	{
	 while(S2!=0 && S3!=0 && S4!=0)
	 {
	  for(i=0;i<8;i++)
	  {
	   if(S2==0 || S3==0 || S4==0)break;
	   temp=0x01<<i;
	   P2=~temp;
	   delay(5000);
	  }
	 }
	}
   }else if(S2==0)
   {
    delay(1500);
	if(S2==0)
	{
	 while(S1!=0 && S3!=0 && S4!=0)
	{
	 temp=0xff;
     for(i=0;i<8;i++)
     {
	  if(S1==0 || S3==0 || S4==0)break;
      temp<<=1;
	  P2=temp;
      delay(5000);
     }
	 temp=0xff;
     for(i=0;i<8;i++)
     {
	  if(S1==0 || S3==0 || S4==0)break;
      temp<<=1;
	  P2=~temp;
      delay(5000);
	 }
	}
	}
   }else if(S3==0)
   {
   	delay(1500);
	if(S3==0)
	{
	 while(S1!=0 && S2!=0 && S4!=0)
	 {
	  for(i=0;i<8;i++)
	  {
	   if(S1==0 || S2==0 || S4==0)break;
	   temp=0x80>>i;
	   P2=~temp;
	   delay(5000);
	  }
	 }
	 }
   }else if (S4==0)
   {
    delay(1500);
    if(S4==0)
    {
	 while(S1!=0 && S2!=0 && S3!=0)
	{
	 temp=0xff;
     for(i=0;i<8;i++)
     {
	  if(S1==0 || S2==0 || S3==0)break;
      temp>>=1;
	  P2=temp;
      delay(5000);
     }
	 temp=0xff;
     for(i=0;i<8;i++)
     {
	  if(S1==0 || S2==0 || S3==0)break;
      temp>>=1;
	  P2=~temp;
      delay(5000);
	 }
	}
   }
  }
 }
}

