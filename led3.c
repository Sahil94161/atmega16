#include<mega16a.h>
#include<delay.h>
void main()
{
while(1)
{
PORTA=0;
delay_ms(1000);
PORTA=0xff;
delay_ms(1000);
PORTA=0x0f   ;
delay_ms(1000);
PORTA=0xf0;
delay_ms(1000);
}
}