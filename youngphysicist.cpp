
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (ll variable = a; variable < b; variable += c)
#define fr(variable, a, b, c) for (ll variable = a; variable > b; variable -= c)
#define test(n) while (n--)
#define trav(x, y) for (auto x : y)
#define pb(v) push_back(v)
#define pp pop_back();
#define MODadd(x, y) ((x % MOD) + (y % MOD) + MOD) % MOD
#define MODsub(x, y) ((max(x, y) % MOD) - (min(x, y) % MOD) + MOD) % MOD;
#define MODmul(x, y) ((x % MOD) * (y % MOD)) % MOD
int main()
{
    ll n;
    cin>>n;
    ll a[n][3];
    f(i,0,n,1){
        f(j,0,3,1){
        cin>>a[i][j];
        }
    }
    ll sumx=0, sumy=0, sumz=0;
    f(i,0,n,1){
        sumx+=a[i][0];
        sumy+=a[i][1];
        sumz+=a[i][2];
        cout<<sumx<<" "<<sumy<<" "<<sumz<<" "<<endl;
    }
     
    if(sumx==0&&sumy==0&&sumz==0)
    cout<<"YES";
    else
    cout<<"NO";
return 0;
}