#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;
    cout<<"simple value of a :"<< a<< endl;
    cout<<"value of a using pointer :"<< *p<<endl;
    cout<<"Address of a which is stored inside pointer p:"<<p<<endl;
    cout<< "address of a using address of variable with a :"<<&a<<endl;
    
    int b[5]={2,4,5,6,7};
    int *r;
    r=b;
    cout<<"accessing variable of array b using pointer r:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<r[i]<<endl;
    }

    int *k;
    k=new int[5];
    k[0]=12; k[1]=13; k[2]=14; k[3]=15; k[4]=16;
    cout<<"acessing heap memory using pointers:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<k[i]<<endl;
    }

    delete [] k;
    return 0;

}