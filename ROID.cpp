#include <bits/stdc++.h>
typedef long long ll;
int const MOD = 1e9 + 7;
using namespace std;

ll fact(int n){
    return (n==0) || (n==1) ? 1 : n* fact(n-1);
}
ll calc(ll p, ll q,ll mod)
{
    ll  expo;
    expo = mod - 2;
    while (expo) {
        if (expo & 1) {
            p = (p * q) % mod;
        }
        q = (q * q) % mod;
        expo >>= 1;
    }
    return p;
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
	int f=1;
	for(int i=0; i<n; i++){
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
	int n2= freq.size();
	for(int i=0; i<n2; i++){
	op*=fact(freq[i]);
    op%=MOD;
	}
	//cout<<op<<endl;
	ll prob= calc(op, tot, MOD);
	cout<<prob<<endl;

	return 0;
}

ll noofarr(ll a[], ll n){
    ll ans=0;
    for(ll i=2; i<=n; i++){
        a[i]+=a[i-1];
        if(a[i]>0)
        ans++;
    }
    if(a[1]>0)
    ans++;
    sort(a, a+n+1);
     for (int i = 1; i <=n; i++)
        ans += n -(upper_bound(a, a + n, a[i] + 0) - a);
    return ans;
}
