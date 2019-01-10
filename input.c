#include<mega16a.h>
#include<delay.h>

void main()

{
int a=0;
  DDRA=0xff;
PORTA=0;
    DDRC.0=1;
    PORTC.0=1;
    DDRC.1=1;
    PORTC.1=1;
    while(1)
    {
    if(PINC.0==0)
    {
   
        a++;
        delay_ms(500);
        PORTA=a;
        
    }
    if(PINC.1==0)
    {
    PORTA=0;
    }
    }

}