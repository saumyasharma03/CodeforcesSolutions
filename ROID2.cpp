#include <bits/stdc++.h>
typedef long long ll;
int const MOD = 1e9 + 7;
using namespace std;

ll fact(ll n){
    int fa=1;
    for(int i=1; i<=n; i++){
        fa*=i;
        fa%=MOD;
    }
    return fa;
}
ll bexp(ll n,ll x){
    if(x==0)return 1;
    ll temp=bexp(n,x/2);
    ll toret=((temp%MOD)*(temp%MOD))%MOD;
    if(x%2==1){
        return (toret*n)%MOD;
    }
    return toret;
}

int main() {
	int n;
	cin>>n;
    int y;
	ll x[n];
	for(int i=0; i<n; i++){
	    cin>>x[i];
	    cin>>y;
	}
	sort(x, x+n);
	vector <long> freq;
	ll f=1;
	for(ll i=0; i<n; i++){
	    if(x[i]==x[i+1]){
	        f++;
	    }
	    else{
	   freq.push_back(f); 
	        f=1;
	    }
	}
	ll tot = fact(n); 
	//cout<<tot<<endl;
	ll op=1;
	ll n2= freq.size();
	for(ll i=0; i<n2; i++){
	op*=fact(freq[i]);
    op%=MOD;
	}
	//cout<<op<<endl;
	ll inv= bexp(tot, MOD-2);
	cout<<((op%MOD)*(inv%MOD))%MOD<<endl;
	
	return 0;
}
