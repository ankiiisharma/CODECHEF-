#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    
	    int n;
	    scanf("%d",&n);
	    
	    int ans=n%3;
	    
	    if(ans==0)
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

