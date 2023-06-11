#include <iostream>
using namespace std;


// STill not completed!!!


int main() {
	int n;
	cin>>n;
	int count =0;
	for(int i=1;i<=100;i++){
	    for(int j =1;j<=100;j++){
	        if((j+i)==n){
	            count++;
	        }
	        else{
	            continue;
	        }
	    }
	}
	cout<<count<<endl;
	return 0;
}