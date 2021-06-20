#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n < 4)
		printf("%d\n",95*n);
	else
		printf("%.2f\n",95*n*0.85);
	return 0;
}