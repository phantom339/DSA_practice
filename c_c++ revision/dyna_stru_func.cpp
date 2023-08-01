#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle * func()
{
    struct Rectangle *p;
    p=new Rectangle;
    p->length=15;
    p->breadth=16;
    return p;
}

int main()
{
    struct Rectangle *ptr;
    ptr=func();
    cout<<"Length: "<<ptr->length<<endl<<"Breadth: "<<ptr->breadth;
    delete ptr ;
    return 0;

}