#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n-2;i>=max(n-k-1,0);i--)
        a[n-1]+=a[i];
        cout<<a[n-1]<<"\n";
    }
}