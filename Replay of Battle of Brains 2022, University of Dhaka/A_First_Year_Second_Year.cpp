#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       int a, b;
        cin >> a >> b;
        int x = (a + b) / 2;
        int y = (a - b) / 2;
        cout << x << " " << y << endl; 
    }
    return 0;
}