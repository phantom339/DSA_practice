#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

void Array_print(int *A, int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<A[i]<<" ";
}

/*How a function can return an Array: */
int *fun_Arr(int n)
{
    int *p;
    p=new int[n];
    for(int i=0;i<n;i++)
    p[i]=i+1;
    return p;
}

int main()
{
    int sz=6;
    int A[5]={2,3,45,6,7};
    cout<<"passing an array to a pointer: ";
    Array_print(A,5);
    cout<<endl<<"getting an array from a function : ";
    int *ptr;
    ptr=fun_Arr(sz);
    for(int i=0;i<sz;i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete [] ptr;

    return 0;
}