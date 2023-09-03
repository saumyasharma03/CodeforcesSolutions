#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    if(n<=2){
        cout<<"No"<<endl;
        return 0;
    }
    ll tot= (n*(n+1))/2;
    ll k=n/2; int flag=0;
    if((n+1)%2==0){
    k=(n+1)/2; flag=1;}
    ll s1=k; //also k is always going to be a single number
    ll s2=tot-s1;
    cout<<"Yes"<<endl;
    cout<<1<<" "<<k<<endl;
    cout<<n-1<<" ";
    for(int i=1; i<=n; i++){
        if(i==k)
        continue;
        else
        cout<<i<<" ";
    }
      return 0;
}