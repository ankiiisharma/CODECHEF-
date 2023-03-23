#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int x;
	    scanf("%d",&x);
	    int y;
	    scanf("%d",&y);
	    
	    
	    int ans=x*y;
	    
	    if(ans>=n)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	    printf("NO\n");
	    }
	    
	    
	}
	return 0;
}

