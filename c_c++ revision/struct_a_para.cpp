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

/*here we will use call by value */
void funs(struct Rectangle r1)
{
    r1.length=20;
    cout<<"using call by value and sending structure as parameter:"<<endl;
    cout<<"length: "<<r1.length<<endl<<"breadth: "<<r1.breadth<<endl;

}

/*Here we will use call by Address: */
void changeLen_br(struct Rectangle *p,int l,int b)
{
    p->length=l;
    p->breadth=b;
}

int main()
{
    Rectangle r={10,5};
    funs(r);
    cout<<"Directly calling withing the main:"<<endl;
    cout<<"length: "<<r.length<<endl<<"breadth: "<<r.breadth<<endl;
    changeLen_br(&r,20,55);
    cout<<"After using call by address the new length and breadth are: "<<endl;
    cout<<"new length: "<<r.length<<endl<<"new breadth: "<<r.breadth<<endl;
    return 0;


}