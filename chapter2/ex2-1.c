#include<stdio.h>
int main()
{
	int a,b,c,s1,s2;
	for (a = 1; a<=9 ;a++)
	{
		for(b = 0;b<=9;b++)
		{
			for(c = 0;c<=9;c++)
			{
				s1 = 100*a +10*b +c;
				s2 = a*a*a+b*b*b+c*c*c;
				
				if (s1 == s2 && s1>=100 && s1<=999)
				{
					printf("%d\n", s1);
				}
			}
		}
	}
	return 0;
}