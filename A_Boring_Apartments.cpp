#include<bits/stdc++.h>
#define ll int
using namespace std;
int main(){
	int t=1;
	cin>>t;
	while(t--){
		string x;
		cin>>x;
		cout<<(x.size()*(x.size()+1)/2) + (x[0]-'0'-1)*10<<endl;
	}
}