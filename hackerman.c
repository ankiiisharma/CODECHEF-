#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        int test = 0;
        scanf("%d%d",&a,&b);
        
        int ans=a+b;
        
        if(ans==0 || ans==1)
        {
            test=1;
        }
          for(int i=2;i<=ans/2;++i)
          {
              if(ans%i==0)
              {
                  test=1;
                  break;
              }
          }
          
          if(test==0)
            {
                printf("Alice\n");
            }
          else
          {
              printf("Bob\n");
          }
          
          
        }
    

    return 0;
}