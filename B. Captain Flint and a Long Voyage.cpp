#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int n8 = (n+3)/4;
        int n9 = n-n8;
        for(int i=n9; i>0; i--) cout << 9;
        for(int i=n8; i>0; i--) cout << 8;
        cout << endl;
    }
    return 0;
}