#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n; int m=0;
    m=n/2;
    m++;
    cout<<m<<endl;
    int piece=1;
    for(int i=1; i<=m; i++){
        cout<<i<<" "<<1<<endl;
    }
    for(int i=2; i<=n-m+1;i++){
        cout<<m<<" "<<i<<endl;;
    }
      return 0;
}