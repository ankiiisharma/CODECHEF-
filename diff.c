#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    
	    
	    
	    if(y<=x)
	    {
	        int ans1=y*1;
	        printf("%d\n",ans1);
    	}
    	else if(y>x)
    	{
    	    int diff=x-y;
            int a=y*1;
            int b=diff*2;
    	    int ans2=a+b;
    	    printf("%d\n",ans2);
    	}
	}
	
	return 0;
}