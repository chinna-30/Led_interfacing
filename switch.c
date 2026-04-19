#include<LPC21XX.h>
#define sw1 14
int main()
{
	IODIR0=1<<17;
	while(1)
	{
		if(((IOPIN0>>sw1)&1)==0)
		{
			IOCLR0=1<<17;
		}	
		else
		{
			IOSET0=1<<17;
		}
		
	}
}
