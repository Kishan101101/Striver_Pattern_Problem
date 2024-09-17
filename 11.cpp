#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool c=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
          c=1;
          else
          c=0;
        for(int j=0;j<=i;j++)
        {
            cout<<c<<" ";
            c=!c;
        }
        cout<<endl;
    }
    return 0;
}