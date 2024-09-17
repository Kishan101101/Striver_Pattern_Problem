// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
 
    for(int i=1;i<=n;i++)
    {
           char c='A';
        for(int j=0;j<=n-i;j++)
        {
            cout<<c++<<" ";       
        }
        cout<<"\n";
    }
    return 0;
}