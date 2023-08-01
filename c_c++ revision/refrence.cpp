#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int &r=a;
    cout<<"direct: "<<a<<endl<<"refrenced: "<<r<<endl;
    return 0;
}