#include<iostream>
using namespace std;

int main()
{
    int A[10]={2,4,6,7,8,1,11};
    cout<<"Size of Array is "<< sizeof(A)<<endl;
    for (int x:A)
    {
        cout<<x<<endl;

    }
    return 0;
}