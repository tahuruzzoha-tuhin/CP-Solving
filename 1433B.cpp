    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--){
    		int n,sum=0,i,j=0;
    		cin>>n;
    		int a[n];
    		for(i=0; i<n; i++) cin>>a[i];
    		
    		while(1){
    			if(a[j]==1) break;
    			j++;
    		}
    		
    		for(i=j+1,j; i<n; i++){
    			if(a[i]==1){
    				sum+=i-j-1;
    				j=i;
    			}
    		}
    		cout<<sum<<endl;
    	}
    	return 0;
    }