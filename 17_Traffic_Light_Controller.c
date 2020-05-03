#include<reg51.h>
sbit LR = P1^0;
sbit LY = P1^1;
sbit LG = P1^2;
sbit RR = P1^3;
sbit RY = P1^4;
sbit RG = P1^5;
sbit UR = P1^6;
sbit UY = P1^7;
sbit UG = P3^7;
sbit DR = P3^4;
sbit DY = P3^5;
sbit DG = P3^6;
void TLCDelay(unsigned int a);
void main(void)
{
	while(1)
	{
		LR = 0;
		LY = 0;
		LG = 1;
		RR = 1;
		RY = 0;
		RG = 0;
		UR = 1;
		UY = 0;
		UG = 0;
		DR = 1;
		DY = 0;
		DG = 0;
		TLCDelay(800);	// Left side green
		LR = 0;
		LY = 1;
		LG = 0;
		RR = 1;
		RY = 0;
		RG = 0;
		UR = 1;
		UY = 0;
		UG = 0;
		DR = 1;
		DY = 0;
		DG = 0;
		TLCDelay(300);	 //Left side yellow
		LR = 1;
		LY = 0;
		LG = 0;
		RR = 0;
		RY = 0;
		RG = 1;
		UR = 1;
		UY = 0;
		UG = 0;
		DR = 1;
		DY = 0;
		DG = 0;
		TLCDelay(800);	// Right side green
		LR = 1;
		LY = 0;
		LG = 0;
		RR = 0;
		RY = 1;
		RG = 0;
		UR = 1;
		UY = 0;
		UG = 0;
		DR = 1;
		DY = 0;
		DG = 0;
		TLCDelay(300);	// Right side yellow
		LR = 1;
		LY = 0;
		LG = 0;
		RR = 1;
		RY = 0;
		RG = 0;
		UR = 0;
		UY = 0;
		UG = 1;
		DR = 1;
		DY = 0;
		DG = 0;
		TLCDelay(800); // Upside Green
		LR = 1;
		LY = 0;
		LG = 0;
		RR = 1;
		RY = 0;
		RG = 0;
		UR = 0;
		UY = 1;
		UG = 0;
		DR = 1;
		DY = 0;
		DG = 0;
		TLCDelay(300); // Upside Yellow
		LR = 1;
		LY = 0;
		LG = 0;
		RR = 1;
		RY = 0;
		RG = 0;
		UR = 1;
		UY = 0;
		UG = 0;
		DR = 0;
		DY = 0;
		DG = 1;
		TLCDelay(800); // Down side Green
		LR = 1;
		LY = 0;
		LG = 0;
		RR = 1;
		RY = 0;
		RG = 0;
		UR = 1;
		UY = 0;
		UG = 0;
		DR = 0;
		DY = 1;
		DG = 0;
		TLCDelay(300); // Down side Yellow
	}	
}
void TLCDelay(unsigned int a)
{
	unsigned int b,c;
	for(b=0;b<a;b++)
		for(c=0;c<1275;c++);
}