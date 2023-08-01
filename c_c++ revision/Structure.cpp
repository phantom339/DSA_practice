#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    struct rectangle r1={10,5};
    cout<<sizeof(r1)<<endl;
    cout<< "length:" << r1.length<<endl;
    cout<< "breadth" << r1.breadth<<endl;
    r1.length=15;
    r1.breadth=9;
    cout<< "length:" << r1.length<<endl;
    cout<< "breadth" << r1.breadth<<endl;

    return 0;
    
}
