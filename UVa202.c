#include<stdio.h>
#include<string.h>
#define maxn 10050
int num[maxn];

int main(){
    int a,b,i,j;
    memset(num,0,sizeof(num));
    while(scanf("%d %d",&a,&b) != EOF){
        int flag[maxn] = {0};
        printf("%d / %d = %d.", a,b,a/b);
        a = a%b*10;
        for(i = 1;!flag[a] ;i++){
            flag[a] = i;
            num[i] = a/b;
            a = a%b*10;
        }
        for(j = 1;j<i;j++){
            if(j == flag[a]) printf("(");
            if(j == 51){
                printf("...");
                break;
            }
            printf("%d",num[j]);
        }
        printf(")\n");
        printf("%d = number of digits in repeating cycle",i-flag[a]);
    }
    return 0;
}