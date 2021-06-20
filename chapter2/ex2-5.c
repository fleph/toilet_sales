#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,kcase=0;
	int decimal;
	while(scanf("%d %d %d",&a,&b,&c)== 3 && a && b && c)
	{
		decimal = a/b;
		printf("Case %d: %d.", ++kcase, decimal); 
		for (int i = 1; i < c; i++) {
			a = a * 10;
			decimal = a / b ;
			printf("%d", decimal % 10);
		}
		decimal = floor(a * 10 / b+0.5);
		if(decimal%10 >=5){
			printf("%d\n",decimal%10+1);
		}else{
			printf("%d\n",decimal%10);
		}

		
		
		
	}
	return 0;
}