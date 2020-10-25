// Problem: A. XORwice
// Contest: Codeforces - Codeforces Round #676 (Div. 2)
// URL: https://codeforces.com/contest/1421/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t,a,b;
	cin >> t;
	while(t--)
	{
		cin >>  a >> b;
		cout << (a^b) << endl;
	}
	return 0;
}