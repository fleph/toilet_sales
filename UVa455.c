#include<stdio.h>
#include<string.h>
#define maxn 105
int main(){
	char s[maxn];
	scanf("%s",s);
	int n = strlen(s),flag = -1;
	for (int i = 2;i<n;i++){
		if(n%i == 0){
			flag = i;
			for(int j = 0;j<n;j++){
				if(s[j]!=s[j%i]){
					flag = -1;
					break;
				}
			}
			if(flag > 0){
				printf("%d\n", flag);
				break;
			}
		}
		
	}
	if(flag < 0 ){
		printf("No circle!\n");
	}
	return 0;
}