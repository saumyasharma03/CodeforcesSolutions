#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int n;
    cin>>n; int ev=0,od=0;
    ll a[n]; ll sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2==0){
            ev++;
        }
        else{
            od++;
            }
    }
    if(ev==n)
    cout<<"Second";
    else
    cout<<"First";
      return 0;
}