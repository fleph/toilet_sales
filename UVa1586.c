#include<stdio.h>
#include<string.h>
#define maxn 100005

int main(){
	char s[maxn];
	scanf("%s",s);
	int n = strlen(s);
	int a[4]={0,0,0,0};
	double sum=0;
	for(int i = 0;i<n;i++){
		if(s[i] == 'C') a[0]++;
		else if(s[i] == 'H') a[1]++;
		else if(s[i] == 'O') a[2]++;
		else if(s[i] == 'N') a[3]++;
		else if(s[i-1] == 'C') a[0]+=s[i]-'0'-1;
		else if(s[i-1] == 'H') a[1]+=s[i]-'0'-1;
		else if(s[i-1] == 'O') a[2]+=s[i]-'0'-1;
		else if(s[i-1] == 'N') a[3]+=s[i]-'0'-1;
	}
	sum = 12.01*a[0]+1.008*a[1]+16.00*a[2]+14.01*a[3];
	printf("%.3f\n",sum);
	return 0;
}