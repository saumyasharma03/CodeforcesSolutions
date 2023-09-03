#include <bits/stdc++.h>
using namespace std;
const int N=10^5;
int main() {
	int t;
	cin>>t;

	while(t--){
	    long long int b[N]={0};
	    int count=0;
	    int n;
	    cin>>n;
	    long long int a[n];
	    //vector <int> v1;
	    
	    for(int i=0; i<n; i++){
	    cin>>a[i];}
	    for(int i=0; i<n-1; i++){
	    if(a[i]!=a[i+1]){
	       //v1.push_back(a[i]);
	       //v1.push_back(a[i+1]);
	       b[i]++;
	       b[i+1]++;
	    }
	    }
	    for(int i=0; i<n; i++){
	        if(b[i]!=0)
	        count++;
	    }
	    cout<<count<<endl;
	    
	}

	return 0;
}
