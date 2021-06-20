#include<stdio.h>
int main()
{
	int min,med,max;
	for (min = 123; min <=329; min++)
	{
		med = min*2;
		max = min*3;
		int add = 0;
		int mul = 1;
		add = (min/100) + (min/10%10) + (min%10) + 
		(med/100) + (med/10%10) + (med%10) +
		(max/100) + (max/10%10) + (max%10);
		mul = (min/100) * (min/10%10) * (min%10) * 
		(med/100) * (med/10%10) * (med%10) *
		(max/100) * (max/10%10) * (max%10);
		if(add == 45 && mul == 362880){
			printf("%d %d %d\n", min,med,max);
		}

	}
	return 0;
}