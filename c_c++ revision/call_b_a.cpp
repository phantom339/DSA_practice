/*In this c/c++ program we will investigate the call by address concept using swap function */
#include<iostream>
#include<stdio.h>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(int argc, char const *argv[])
{
    int a,b;
    a=22;
    b=33;
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;

    swap(&a, &b);
    cout<<"After swaping through call by address :"<<endl<<"A: "<<a<<endl<<"B: "<<b<<endl;
    return 0;
}
