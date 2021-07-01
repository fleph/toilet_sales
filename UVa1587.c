#include<stdio.h>
#include<string.h>

int a[12];
void mySwap(int i, int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
int main()
{
    while( scanf("%d", &a[0])==1 ){
        for(int i=1;i<12;i++) scanf("%d",&a[i]);

        for(int i=0; i<12; i+=2){
            if(a[i]>a[i+1]){
                mySwap(i,i+1);
            }
        }
        for(int i=0; i<12; i+=2){
            for(int j=i+2; j<12; j+=2){
                if(a[i]>a[j]){
                    mySwap(i,j);
                    mySwap(i+1,j+1);
                }else if(a[i]==a[j]&&a[i+1]>a[j+1]){
                    mySwap(i,j);
                    mySwap(i+1,j+1);
                }
            }
        }
        
        int bad=0;
        
        for(int i=0; i<12; i+=4){
            if( a[i]!=a[i+2] ) bad=1;
            if( a[i+1]!=a[i+3]) bad=1;
        }
        
        if(a[0]!=a[4])bad=1;
        if(a[1]!=a[8])bad=1;
        if(a[5]!=a[9])bad=1;
        if(bad==0) printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");
    }
}