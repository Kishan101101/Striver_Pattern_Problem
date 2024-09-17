//       *      
//      ***     
//     *****    
//    *******   
//   *********  





#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
  int star=1;
  for(int i=0; i<n; i++)
  {
    for(int j=0;j<(n-i+1);j++)
    {
            cout<<" ";
    } 
    for(int k=0;k<star;k++)
    {
        cout<<"*";
    }
    
    for(int j=0;j < (n-i+1);j++)
    {
            cout<<" ";
    }
    star+=2;
    cout<<endl;

  }

  return;
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}