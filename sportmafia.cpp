#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int pos=0;
    int neg=0;
    int sum=0;
    for( i=1;i<=n;i++){
        sum+=i;
        if(sum-(n-i)==k)
        break;
    }
    cout<<n-i;
    
      return 0;
}