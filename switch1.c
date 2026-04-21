#include<LPC21XX.h>
#define sw1 1<<14
#define sw2 1<<15
#define led1 1<<17
#define led2 1<<18
int main()
{
	IODIR0=led1|led2;
	while(1)
	{
		if((IOPIN0&sw1)==0)
		IOCLR0=led1;
		else if((IOPIN0&sw2)==0)
		IOCLR0=led2;
		else
		IOSET0=led1|led2;
	}
}
