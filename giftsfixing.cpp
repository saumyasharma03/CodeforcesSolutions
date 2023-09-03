#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
      ll t;
      cin>>t;
      while(t--){
      ll n;
      cin>>n;
      vector <ll> a;
      vector <ll> b;
      for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            a.push_back(x);
      }
      for(ll i=0; i<n; i++){
            ll x;
            cin>>x;
            b.push_back(x);
      }
      ll count=0;
      ll x=*min_element(a.begin(), a.end());
      ll y=*min_element(b.begin(), b.end());
      for(ll i=0;i<n; i++){
            ll mi= min((a[i]-x),(b[i]-y));
            ll ma=abs((a[i]-x)-(b[i]-y));
            count+=mi;
            count+=ma;
      } 
      cout<<count<<endl;
}
}