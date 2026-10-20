 #include<reg51.h>
  sbit S1=P3^1;
  sbit S2=P3^0;
  sbit S3=P3^2;
  sbit S4=P3^3;
  sbit YA=P2^2;
  sbit YB=P2^3;
  sbit YC=P2^4;
  void delay (unsigned int i)
  {
   unsigned int k;
   for(k=0;k<i;k++);
  } 
  unsigned char code dsip[]={0x40,0x06,0x5b,0x4f,0x66};// 共阴极，"-",1到4的显示码
  void main()
{
    unsigned char winner=0;
    YA=0; 
    YB=0; 
    YC=0; 
    P0=dsip[0];//显示 "-" 
    while(1)
    {
      if(winner==0)
      {
       if(S1==0) // 1号选手按下
        {
         delay(1000);
         if(S1==0)
          {
           winner=1;
           while(S1==0)
		   {

		   }
          }
        }
           else if(S2==0) // 2号选手按下
           {
            delay(1000);
            if(S2==0)
            {
             winner=2;
             while(S2==0)
			 {

			 }
            }
           }
           else if(S3==0) // 3号选手按下
           {
            delay(1000);
            if(S3==0)
             {
              winner=3;
              while(S3==0)
			  {
			  
			  }
             }
            }
            else if(S4==0) // 4号选手按下
            {
              delay(1000);
              if(S4==0)
              {
                winner=4;
                while(S4==0)
				{
				
				}
              }
            }
        }
        else
        {
         P0=dsip[winner]; 
        }
   }
}