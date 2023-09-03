#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,t;
    cin>>n>>t;
    if(n==1&&t==10){
        cout<<-1<<endl;
    }
    else if(n>=2&&t==10){
        for(int i=0;i<n-1; i++){
            cout<<"1";
        }
        cout<<"0";
        cout<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            cout<<t;
        }
        cout<<endl;
    }
      return 0;
}