#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t!=0)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(y<=1.07*x)
	    {
	        printf("YES\n");
	        
	    }
	    else{
	        printf("NO\n");
	        
	    }
	    t=t-1;
	}
	return 0;
}