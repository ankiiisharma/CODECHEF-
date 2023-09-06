#include <iostream>
using namespace std;

// class Hero{

//     int xyz;
// };

// int main()
// {
//     Hero H1;

//     cout<<"size : "<<sizeof(H1)<<endl;

//     return 0;
// }

class MyClass {       
  public:             
    int myNum;        
    string myString;  
};

int main() {
  MyClass myObj;


  myObj.myNum = 15; 
  myObj.myString = "Some text";


  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}