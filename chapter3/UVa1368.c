#include<stdio.h>
#include<string.h>

char DNA[55][1050];
int d[4];

int main(){
	memset(DNA, 0, sizeof(DNA));
	
	
	int t;
	scanf("%d",&t);
	while(t--){
		int m,n;
		scanf("%d %d",&m,&n);
		int con = 0;
		for(int i = 0;i<m;i++)		scanf("%s",&DNA[i][0]);

		for(int i = 0; i < n ;i++ ){
			memset(d, 0, sizeof(d));
			for(int j = 0; j < m ;j++){
				switch (DNA[j][i])
                	{
                	case 'A':
                	    d[0]++;
                    	break;
                	case 'C':
                    	d[1]++;
                    	break;
                	case 'G':
                    	d[2]++;
                    	break;
                	case 'T':
                    	d[3]++;
                    	break;
                	}
			}
			int re, max = -1;
        	for (int j = 0; j < 4; j++)
        	{
            	if (d[j] > max)
            	{
                	max = d[j];
                	re = j;
            	}
        	}
        	switch (re)
        	{
        	case 0:
            	putchar('A');
            	break;
        	case 1:
            	putchar('C');
            	break;
        	case 2:
            	putchar('G');
            	break;
        	case 3:
            	putchar('T');
            	break;
        	}
        	con += (m - max);
    	}
    	printf("\n%d\n", con);
	}
	
	
	return 0;
}