#include<stdio.h>
int main()
{
	int a,b,c,kcase = 0,n = -1;
	while(scanf("%d %d %d",&a,&b,&c)==3){
		n  = -1;
		for ( int s = 10; s<=100;s++)
		{
			if(s%3 == a && s%5 ==b && s%7 == c)
			{
				n = s; 
				break;
			}
		}
		if(n< 0){
			printf("Case %d: No answer\n",++kcase);
		}else
		{
			printf("Case %d: %d\n",++kcase,n);
		}
		n=-1;
	}
	
	return 0;
}