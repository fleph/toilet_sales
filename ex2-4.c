#include<stdio.h>
int main()
{
	long n ,m ;
	double sum =0;
	int kcase = 0;
	while(scanf("%ld %ld",&n,&m)== 2 && n && m)
	{
		for(long i =n;i <= m;i++)
		{
			double term = 1.0/(i*i);
			sum += term;
		}
		printf("Case %d: %.5f\n",++kcase, sum);
		sum = 0;
	}
	
	
	return 0;
}