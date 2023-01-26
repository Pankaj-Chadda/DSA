#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number of rows:";
    cin>>n;//Number of rows
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}