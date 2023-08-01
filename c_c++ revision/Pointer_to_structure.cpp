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

int main()
{
    Rectangle r={10,5};
    Rectangle *p=&r;
    cout<<"Directly accessing through the structure variable:"<<endl;
    cout<<"length: "<<r.length<<endl<<"breadth: "<<r.breadth<<endl;
    cout<<"Accessing through the Pointer structure variable:"<<endl;
    cout<<"Length: "<<p->length<<endl<<"Breadth: "<<p->breadth<<endl;

    /*Now we will be allocating structure type heap memory and the 
    try to access that using a pointer variable */
    Rectangle *k;
    k=new Rectangle;
    k->length=15;
    k->breadth=7;
    cout<<"Accessing dynamically allocated memory of structure using pointer"<<endl;
    cout<<"Length: "<<k->length<<endl<<"Breadth: "<<k->breadth<<endl;
    delete k;

    return 0;
}