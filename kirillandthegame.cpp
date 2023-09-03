#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ll l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    ll i,j;
    for(i=x; i<=y; i++){
         j=i*k;
        if(j>=l&&j<=r){
            cout<<"yes";
            return 0;
        }
        
    }

            cout<<"no";
            return 0;
        
}
