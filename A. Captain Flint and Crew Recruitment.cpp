#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t, n, cnt, flag=0;
    cin >> t;
    while(t--){
        cin >> n;
    //     cnt = 0;
    //     int div[n] = {0};
    //     for(int i=2; i<=n; ++i){
    //         if(n%i==0){
    //             for(int j=1; j<=i; ++j){
    //                 if(i%j==0){
    //                     cnt++;
    //                 }
       
    //                 if(cnt == 2){
    //                     div[i] = i;
     
    //                    cnt = 0;
    //                 }
    //             }
   
    //         }
    //     }
    //     for(int i=2; i<n; ++i){

    //         cout << div[i] << endl;
    //         if(div[i]+div[i+1] == n){
    //             flag++;
    //             cout << flag << endl;
    //         }
    //     }
    //     if(flag>0){
    //         cout << "YES" << endl;
    //     }
    //     else{
    //         cout << "NO" << endl;
    //     }
    // }
        if(n<=30) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            if(n == 36 || n == 40 || n == 44) cout << 6 << " " << 10 << " " << 15 << " " << n-31 << endl;
            else cout << 6 << " " << 10 << " " << 14 << " " << n-30 << endl;
        }
    }

    return 0;
}