//       A 
//     A B A 
//   A B C B A 
// A B C D C B A 


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
 
    for(int i=1;i<=n;i++)
    {
           char c='A';
        for(int k=1;k<=n-i;k++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<c++<<" ";       
        }
        c-=2;
        for(char j=c;j>='A';j--)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}