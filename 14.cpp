// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
 
    for(int i=1;i<=n;i++)
    {
           char c='A';
        for(int j=1;j<=i;j++)
        {
            cout<<c++<<" ";       
        }
        cout<<"\n";
    }
    return 0;
}