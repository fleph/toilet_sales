#include<stdio.h>
#include<string.h>
#define maxn 10050
char s[maxn],t[maxn];

int main(){
    int slen,tlen,tflag,sflag;
    int f = 0;
    while(scanf("%s",s) != EOF){
        scanf("%s",t);
        slen = strlen(s);
        tlen = strlen(t);

        sflag = 0;
        for(tflag = 0;tflag < tlen;tflag++){
            if(s[sflag] == t[tflag]){
                sflag++;
                if(sflag == slen){
                    f = 1;
                    break;
                }
            }
        }
        if(f == 1){
            printf("YES!\n");
        }
        else{
            printf("NO!\n");
        }

    } 
    return 0;
}