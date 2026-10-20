#include <reg51.h>
void delay (unsigned int i)
{
    unsigned int k;
    for(k=0; k<i; k++);
}
void main ()
{
    unsigned char button;
    // 段码表：0, 1, 2, 3, 4, "-"
    unsigned char code disp[]={0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x40};
    P3 = 0xff;
    P0 = disp[5];
    P2 = 0x00;
    while(1)
    {
        // 【核心】屏蔽高4位，只看 P3.0 ~ P3.3
        button = P3 & 0x0f;         
        // 如果低四位不是 1111（0x0F），说明有按键按下了
        if(button != 0x0f) 
        {
            delay(1200);
            // 再次读取并屏蔽高四位
            button = P3 & 0x0f; 
            if(button != 0x0f) // 确认确实有键按下
            {
                switch(button)
                {
                    // 1号选手（P3.1按下，低四位为 1101，即 0x0D）
                    case 0x0d: P2 = 0x00; P0 = disp[1];while(1);break;
                    // 2号选手（P3.0按下，低四位为 1110，即 0x0E）
                    case 0x0e: P2 = 0x00; P0 = disp[2];while(1);break;
                    // 3号选手（P3.2按下，低四位为 1011，即 0x0B）
                    case 0x0b: P2 = 0x00; P0 = disp[3];while(1);break;               
                    // 4号选手（P3.3按下，低四位为 0111，即 0x07）
					case 0x07: P2 = 0x00; P0 = disp[4];while(1);break;      
                    default: break;
                }
            }
        }
    }
}