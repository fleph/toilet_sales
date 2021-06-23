#include<stdio.h>
#include<string.h>

int main(){
	int a[10]={0,0,0,0,0,0,0,0,0,0};
	int n;
	int temp = 0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		temp = i;
		while(temp>0){
			a[temp%10]++;
			temp = temp/10;
		}
	}
	for(int j = 0;j<10;j++){
		printf("%d ", a[j]);
	}
	printf("\n");
	return 0;
}