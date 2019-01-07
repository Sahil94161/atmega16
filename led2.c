#include<mege16a.h>
#inclue<delay.h>
void main()
{
while(1)
{
PORTA=0b000000001;
delay_ms(1000);
PORTA=0b000000010;
delay_ms(1000);
PORTA=0b000000100;
delay_ms(1000);
PORTA=0b000001000;
delay_ms(1000);
PORTA=0b000010000;
delay_ms(1000);
PORTA=0b000100000;
delay_ms(1000);
PORTA=0b001000000;
delay_ms(1000);
PORTA=0b010000000;
delay_ms(1000);
PORTA=0b100000000;
delay_ms(1000);




}

}