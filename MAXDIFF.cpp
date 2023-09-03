#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    long long int w[n]; long long int maxs=0; long long int mins=0;
	    cin>>k;
	   
	   for(int i=0; i<n; i++){
	       cin>>w[i];
	   }
	   sort(w, w+n, greater<int>());
	    if(k>=n-k){
	    int maxa[k];
	    int mina[n-k];
	    int i;
	    for( i=0; i<k; i++){
	        maxa[i]=w[i];
	        maxs+=maxa[i];
	    }
	    for(int j=0; j<n-k;j++){
	        mina[j]=w[i];
	        i++;
	        mins+=mina[j];
	    }
	    }
	    else
	    {
	       int maxa[n-k];
	       int mina[k];
	        int i;
	    for( i=0; i<n-k; i++){
	        maxa[i]=w[i];
	        maxs+=maxa[i];
	    }
	    for(int j=0; j<k;j++){
	        mina[j]=w[i];
	        i++;
	        mins+=mina[j];
	    }
	    }
	    
	}
	return 0;
}
