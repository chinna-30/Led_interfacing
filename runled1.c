#include<LPC21XX.h>
#include"delayheader.h"
int main()
{
	int i=0,d=1;
	PINSEL0=0;
	IODIR0=0X000000FF;
	IOSET0=0X000000FF;
	while(1)
	{
		IOCLR0=1<<i;
		delay_msec(100);
		IOSET0=1<<i;
		delay_msec(100);
	  i =i+d;
		if(i==7||i==0)
			d=-d;
	}
}
	