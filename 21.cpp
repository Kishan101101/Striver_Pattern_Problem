// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k = 2 * n - 1;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            int x = abs(i - n + 1);
            int y = abs(j - n + 1);
            int currCell = max(x, y) + 1;
            cout << currCell; 
        }
        cout << '\n';
    }
}