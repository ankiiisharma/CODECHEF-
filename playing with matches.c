#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     int a,b;
     scanf("%d%d",&a,&b);
     
     int x,y,z;
     
     x=a+b;
     
     while(y!=0)
     {
     x=y%10;
     
     if(x==0 || x==6 || x==9)
     {
         z=z+6;
     }
     else if(x==1)
     {
         z=z+2;
     }
    else if(x==2 || x==3 || x==5)
    {
         z=z+5;   
    }
    else if(x==4)
    {
        z=z+4;
    }
    else if(x==7)
    {
        z=z+3;
    }
    else{
        z=z+7;
    }
    y=y/10;
  }
     printf("%d\n",z);
     z=0;
    }
	return 0;
}

