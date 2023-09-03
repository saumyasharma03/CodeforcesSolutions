#include <iostream>
using namespace std;
typedef long long int ll;
ll MOD=1000000007;
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n; ll x=0;ll sum=0;
	    ll a[n]; ll count=0;
	    for(ll i=0; i<n; i++){
	        cin>>a[i];
	        sum+=a[i];
	    }
	   for(ll i=0; i<n; i++){
	       x=0;
	       for(ll j=i;j<n;j++){
	           x+=a[j];
	           //cout<<sum-x<<endl;
	           if((sum-x)%2==0){
	           count++;
	           count=count%MOD;
	           }
	       }
	   }
	   cout<<count<<endl;
	}
	return 0;
}
