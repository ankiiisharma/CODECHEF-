#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float n,x;
	    scanf("%d%d",&n,&x);
	    
	    float z=n-x;
	    
	    float ans=n/2;
	    
	    if(ans>=x)
	    {
	        printf("NO\n");
	    }
	    else
	    {
	        printf("YES\n");
	    }
	    
	}
	return 0;
}