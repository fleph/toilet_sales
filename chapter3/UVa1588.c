#include<stdio.h>
#include<string.h>
#define maxn 10050
char a[maxn],b[maxn];
int n1,n2;

int min(const int ki,const int kj){
    return ki<kj?ki:kj;
}

int cmp(char *s1,char *s2,int n){
    int sumlen = n1+n2,minn = min(n1,n2),len = sumlen;
    for(int i=0;i<n;i++){
        int ok = 1,fix = min(n-i,minn);
        for(int j = 0;j<fix;j++){
            if(s1[i+j]=='2'&& s2[j]=='2'){
                ok = 0;
                break;
            }
        }
        if(ok&&len>sumlen-fix) len=sumlen-fix;
    }
    return len;
}

int main(){
    while(scanf("%s",a) != EOF){
        scanf("%s",b);
        n1 = strlen(a);
        n2 = strlen(b);
        printf("%d\n",min(cmp(a,b,n1),cmp(b,a,n2)));
    }
    return 0;
}

