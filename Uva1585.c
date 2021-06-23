#include<stdio.h>
#include<string.h>
#define maxn 100005

int main()
{
	char s[maxn];
	int score = 0,flag = 0;
	scanf("%s",s);
	int n = strlen(s);
	for (int i = 0;i<n;i++)
	{
		if(s[i] == 'O') flag++;
		if(s[i] == 'X') flag = 0;
		score +=flag;
	}
	printf("%d\n", score);
	return 0;
}