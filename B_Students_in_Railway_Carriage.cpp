#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>

#define ll              long long int
#define ul              unsigned long long
#define ld              long double
#define f0(i,n)         for(int i=0;i<n;i++)
#define f1(i,n)         for(int i=1;i<=n;i++)
#define endl            "\n"
#define lg(r,n)         (int)(log2(n)/log2(r))
#define sf1(a)          scanf("%d",&a)
#define sfl(a)          scanf("%lld",&a)
#define sfc(a)          scanf("%c",&a)
#define sf2(a,b)        scanf("%d %d",&a,&b)
#define sf2l(a,b)       scanf("%lld %lld",&a,&b)
#define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sf3l(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define mx1             110
#define mx2             1010
#define mx3             10010
#define mx4             100010
#define mx5             1000010
#define mx6             10000010
#define PI              3.14159265358979323846
#define E               2.71828182845904523536

using namespace std;


template< class T > T gcd(T a, T b)
{
    return (b != 0 ? gcd<T>(b, a%b) : a);
}
template< class T > T lcm(T a, T b)
{
    return (a / gcd<T>(a, b) * b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    ll n, a, b, str=0, dot=0, nb=0, na=0;
    cin >> n >> a >> b;
    char s[n+1];
    f1(i,n) cin >> s[i];
    f1(i,n) {
        
        if(s[i]=='*') str++;
        if(s[i]=='.') {
            dot++;
            s[i]='B';
        }
    }

    f1(i,n){
        if(s[i]=='B' && s[i+1]=='B') s[i+1]='A';
    } 
    //  f1(i,n) cout << s[i];  
    f1(i,n) {
        if(s[i]=='B') nb++;
        if(s[i]=='A') na++;
    }
    if(na<=a && nb<=b) cout << nb+na << endl;
    else if(nb>b && na<=a){
        if(a==b)  cout << (nb-b)+na << endl;
        else cout << (dot-b)+(a-na) << endl;
    }
    // else if(na>a && nb<=b) cout << nb+(dot-a) << endl;
    // else if(na>a && nb>a) cout << (nb-b)+(na-a) << endl;
   

     //cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;

    return 0;
}
