// *****
// *   *
// *   *
// *   *
// *****



#include<bits/stdc++.h>
using namespace std;

void getStarPattern(int n) {
  
    if(n==1)
    {
        cout<<"*";
        return;
    }
    for(int i=1;i<=n;i++)
    cout<<"*";
    cout<<"\n";
    for(int i=1;i<=n-2;i++)
    {
        cout<<"*";
        for(int j=1;j<=n-2;j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=1;i<=n;i++)
    cout<<"*";
    cout<<"\n";
}
int main()
{
    int n;
    cin>>n;
    getStarPattern(n);
    return 0;
}