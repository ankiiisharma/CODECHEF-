#include <iostream>
using namespace std;

int main() {
	int t;
    scanf("%d",t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        
        int ans=x+y;
        
        if(ans>6)
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
