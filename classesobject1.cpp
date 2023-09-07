#include<iostream>
using namespace std;

class car{
    public:
    string brand;
    string model;
    int year;
       
};

int main()
{
    car carobj1;

    carobj1.brand = "Alto";
    carobj1.model = "800";
    carobj1.year = 2000;

    car carobj2;

    carobj2.brand = "BMW";
    carobj2.model = "X7";
    carobj2.year = 1994;


    cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
    cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<endl;


    return 0;
}