#include<iostream>
#include<bits./stdc++.h>
using namespace std;
int main()
{

    int n;
    int x;
    cin>>n;

    int num=n;
    int reverse=0;

    while(num!=0){
    x=num%10;
    reverse=(reverse*10)+x;
    num=num/10;
    }

    if(n==reverse){
        cout<<"Palindrome"<<endl;
    }

    else{
        cout<<"Not Plaindrome"<<endl;
    }


    return 0;
}