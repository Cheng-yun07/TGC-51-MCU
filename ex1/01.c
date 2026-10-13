 #include <reg51.h>
 sbit D0=P2^0;
 sbit D1=P2^1;
 sbit D2=P2^2;
 sbit D3=P2^3;
 sbit D4=P2^4;
 sbit D5=P2^5;
 sbit D6=P2^6;
 sbit D7=P2^7;

 void delay(unsigned int i)
 {
 unsigned int k;
 for(k=0;k<i;k++);
 }
 void main()
 	{
 	  while(1)
	  {
	  D0=0;
	  D1=0;
	  D2=0;	  
	  D3=0;	  
	  D4=0;
	  D5=0;
	  D6=0;
	  D7=0;
	  delay(5000);
	  D0=1;
	  delay(5000);
	  D1=1;
	  delay(6000);
	  D2=1;
	  delay(7000);
	  D3=1;
	  delay(8000);
	  D4=1;
	  delay(9000);
	  D5=1;
	  delay(10000);
	  D6=1;
	  delay(11000);
	  D7=1;
	  delay(12000);
	  }
 	}
 