#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        
        if(x>=1 && x<=4)
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
