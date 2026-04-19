#include<LPC21XX.h>
void delay_ms(int ms)
{
	unsigned int i;
	for(;ms>0;ms--)
	for(i=12000;i>0;i--);
}
int main()
{
	int i=0;
	PINSEL0=0;
	IODIR0=0X000000FF;
	IOSET0=0X000000FF;
	while(1)
	{
	while(i<8)
	{
		IOCLR0=1<<i;
		delay_ms(100);
		IOSET0=1<<i;
		delay_ms(100);
		i++;
	}
	while(i>0)
		{
			i--;
		  IOCLR0=1<<i;
		  delay_ms(100);
		  IOSET0=1<<i;
		  delay_ms(100);
	  }
	}
}
