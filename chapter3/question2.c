#include<stdio.h>
#include<string.h>
#define maxn 100000 + 10
int main(){
	char s[maxn-5];
	scanf("%s",s);
	int tot = 0;
	for(int i = 0;i < strlen(s);i++)
		if(s[i] == '1') tot++;
	printf("%d\n",tot );
	return 0;
}