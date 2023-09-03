#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n; int i=1;
    cin>>n;
    vector <int> v1;
    int cnt=1;
    for( i=1;cnt<=n ;i++){
        if(i%3==0||i%10==3)
        continue;
        if(cnt==n){
        cout<<i<<endl;
        break;
    }
       cnt++;
    }
    //cout<<i<<endl;
    }
    
      return 0;
}