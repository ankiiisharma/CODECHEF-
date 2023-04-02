#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,a,b;
	    scanf("%d%d%d",&x,&a,&b);
	    
	    int ans=a+b;
	    
	    if(ans>=x)
	    {
	        printf(YES\n);
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

