#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    char str1[13];
    char str2[13];
    int ret;
 
    strcpy(str1, "HELLO");
    strcpy(str2, "hello");
 
    ret = strcoll(str1, str2);
 
    if (ret > 0) {
        cout << "str1 is greater than str2";
    } else if (ret < 0) {
        cout << "str1 is lesser than str2";
    } else {
        cout << "str1 is equal to str2";
    }
 
    return 0;
}