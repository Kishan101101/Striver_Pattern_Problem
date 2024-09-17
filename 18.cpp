// * * * * * * * * * * * * * * * * 
// * * * * * * *     * * * * * * * 
// * * * * * *         * * * * * * 
// * * * * *             * * * * * 
// * * * *                 * * * * 
// * * *                     * * * 
// * *                         * * 
// *                             * 
// *                             * 
// * *                         * * 
// * * *                     * * * 
// * * * *                 * * * * 
// * * * * *             * * * * * 
// * * * * * *         * * * * * * 
// * * * * * * *     * * * * * * * 
// * * * * * * * * * * * * * * * * 





#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
 {
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        for(int k=1;k<=i-1;k++)
        {
            cout<<"    ";
        }
        for(int j=i;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(int k=i;k<=n-1;k++)
        {
            cout<<"    ";
        }
        for(int j=1;j<=i;j++)
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