#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<= n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(int k=1;k<=n-i;k++)
        {
            cout<<"    ";
        }
    
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<"*"<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"    ";
        }
    
         for(int j=n-i;j>0;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    pattern(n); 
    return 0;
}