#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<(j+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}