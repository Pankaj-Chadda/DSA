#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the numbe of rows:";
    cin>>n;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;
}