#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int x = str.length();
    int flag=0;
    for(int i=0;i<x;i++)
    {
        if(str[0]=='/' && str[1]=='/'){
            flag=1;
        }
        else if(str[0]=='/' && str[1]=='*' && str[-1]=='*' && str[x]=='/'){
            flag=2;
        }
        else{
            flag==3;
        }
    }

    if(flag==1){
        cout<<"Single Comment"<<endl;
    }
    else if(flag==2){
        cout<<"Multi line comment"<<endl;
    }
    else{
        cout<<"NOT a comment"<<endl;
    }

    return 0;
}