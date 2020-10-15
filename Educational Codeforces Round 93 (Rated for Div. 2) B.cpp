#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <bits/stdc++.h>

#define lli             long long int
#define ull             unsigned long long
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
    lli t;
    cin >> t;
    while(t--){

        lli p, f, cnts, cntw, s, w, x1=0, x2=0, y1=0, y2=0;
        cin >> p >> f;
        cin >> cnts >> cntw;
        cin >> s >> w;

        if(s<w){
            f0(i,p){

                if(((p-w*i)%s==0)) {
                x1=abs(p-w*i)/s;
                y1=i;
                break;
                }
            }
            f0(i,f){

                if((f-w*i)%s==0){
                x2=abs(f-w*i)/s;
                y2=i;
                break;
                }
            }
            cout << x1+x2+y1+y2 << endl;
        }
        else if(s==w){

            f0(i,p){

                if(((p-w*i)%s==0)) {
                x1=abs(p-w*i)/s;
                y1=i;
                break;
                }
            }
            cout << x1+y1 << endl;
        }
        else if(s>w){
            f0(i,f){
                if(w*i<=f){
                    x1=i;
                }
            }
            cout << x1 << endl;
        }
    }


    return 0;
}