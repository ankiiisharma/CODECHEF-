#include <iostream>
using namespace std;

int main() {
    int T,X;
    cin>>T;
    while(T--)
    {
        cin>>X;
        if(X<=300)
        {
            cout<<3000<<endl;
        }
        else
        cout<<X*10<<endl;
    }
	return 0;
}