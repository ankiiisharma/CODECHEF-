#include<iostream>
#include<map>
using namespace std;

int main(){
   
   map<char,int> test;

   test['a'] = 10;
   test['b'] = 20;
   test['c'] = 30;
   test['d'] = 40;
   test['e'] = 50;

   map<char,int>:: iterator i;
   for(i=test.begin();i!=test.end();++i)

}

