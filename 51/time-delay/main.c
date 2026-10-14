#include <REGX52.H>
#include <INTRINS.H>

void Delayms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
	while(xms){
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);xms--;
	}
}
void main()
{
	Delayms(100);
}