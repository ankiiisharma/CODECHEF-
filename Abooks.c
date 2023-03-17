#include <stdio.h>
int main(void) 
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    int N;
	    scanf("%d",&N);
	    int a[N],B[N];
	    for(int i=0;i<N;i++)
	    {
	    scanf("%d",&a[i]);
	    B[i]=0;
	    }
	    for(int i=0;i<N;i++)
        for(int j=i+1;j<N;j++)
        {
            if(a[i]<a[j])
            B[i]++;
        }
        for(int i=0;i<N;i++)
         printf("%d\t",B[i]);
	}   printf("\n"); 
	return 0;
}

