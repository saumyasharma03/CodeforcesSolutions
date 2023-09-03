#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t; while(t--){
	    int n; cin>>n;
	    int a[n],c=1,ans=1;
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n-1;i++){
	        if(a[i]==a[i+1]) c++;
	        else{
	            ans=max(ans,c);
	            c=1;
                cout<<ans<<" ";
	        }
	    }
	    cout<<n-ans<<endl;
	}
	return 0;
}