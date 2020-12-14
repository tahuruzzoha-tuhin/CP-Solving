// #include <iostream>
// #include <string>
// #include <cmath>
// #include <cstdio>
// #include <iomanip>
// #include <algorithm>
#include <bits/stdc++.h>

// #define ll              long long int
// #define ul              unsigned long long
// #define ld              long double
// #define f0(i,n)         for(int i=0;i<n;i++)
// #define f1(i,n)         for(int i=1;i<=n;i++)
// #define endl            "\n"
// #define lg(r,n)         (int)(log2(n)/log2(r))
// #define sf1(a)          scanf("%d",&a)
// #define sfl(a)          scanf("%lld",&a)
// #define sfc(a)          scanf("%c",&a)
// #define sf2(a,b)        scanf("%d %d",&a,&b)
// #define sf2l(a,b)       scanf("%lld %lld",&a,&b)
// #define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
// #define sf3l(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
// #define mx1             110
// #define mx2             1010
// #define mx3             10010
// #define mx4             100010
// #define mx5             1000010
// #define mx6             10000010
// #define PI              3.14159265358979323846
// #define E               2.71828182845904523536

// using namespace std;


// template< class T > T gcd(T a, T b)
// {
//     return (b != 0 ? gcd<T>(b, a%b) : a);
// }
// template< class T > T lcm(T a, T b)
// {
//     return (a / gcd<T>(a, b) * b);
// }


// int compareArray(int a[],int b[],int size)	{
// 	int i;
// 	for(i=0;i<size;i++){
// 		if(a[i]!=b[i])
// 			return 1;
// 	}
// 	return 0;
// }



// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr); cout.tie(nullptr);
    
//     int t, n, m, N=110;
//     cin >>t;
//     while(t--){
//         cin >> n >> m;
//         int a[N];
//         int b[N];
//         int c = 0;
//         f0(i,n){
//             cin >> a[i];
//         }
//         f0(i,m){
//             cin >> b[i];
//         }
//         f0(i,N)
//         {
//             if(i<=n) a[i]=a[i];
//             else a[i]={0};
//             if(i<=m) b[i]=b[i];
//             else b[i]={0};
//         }
        
//         if(compareArray(a,b,N)==0)
//             cout << 'h' << endl;
  
//      //cerr<<"Time Elapsed "<<(double)clock()/CLOCKS_PER_SEC <<" s"<<endl;
//      cout << 'k';

//     return 0;
// }
// }


int Array1[m] = { 0 };
int Array2[n] = { 0 };
int ArrayCommon[n] = { };

void AddToCommon(int data)
{
    //How many commons we got so far?
    static int pos = 0; 
    bool found = false;
    for(int i = 0 ; i <= pos ; i++)
    {
        //Already found it?
        if(ArrayCommon[i] == data)
        {
            found = true;
        }
    }
    if(!found)
    {
        //Add it
        ArrayCommon[pos] = data;
        pos++;
    }
}

int main(){
    for(int i = 0 ; i < m ; i++)
{
    for(int j = 0 ; j < n ; j++)
    {
        //Found a Common Element!
        if(Array1[i] == Array2[j])
            AddToCommon(Array1[i]);
    }
}
}
