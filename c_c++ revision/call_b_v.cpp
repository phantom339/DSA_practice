/*In this code we will be accessing the function using call by value parameters*/
#include<iostream>
#include<stdio.h>
using namespace std;

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int x,y,sum;
    x=10;
    y=12;
    sum=add(x,y);
    cout<<"The sum is: "<<sum<<endl;
    return 0;

}