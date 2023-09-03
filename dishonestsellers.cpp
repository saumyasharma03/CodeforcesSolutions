
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (int variable = a; variable < b; variable += c)
#define fr(variable, a, b, c) for (int variable = a; variable > b; variable -= c)
#define test(n) while (n--)
#define trav(x, y) for (auto x : y)
#define pb(v) push_back(v)
#define pp pop_back();
#define MODadd(x, y) ((x % MOD) + (y % MOD) + MOD) % MOD
#define MODsub(x, y) ((max(x, y) % MOD) - (min(x, y) % MOD) + MOD) % MOD;
#define MODmul(x, y) ((x % MOD) * (y % MOD)) % MOD
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n], b[n];
    f(i,0,n,1){
        cin>>a[i];
    }
    f(i,0,n,1){
        cin>>b[i];
    }
    vector <pair<int, int>> v;
    f(i,0,n,1){
        v.pb(make_pair(a[i]-b[i], i));
    }
    sort(v.begin(), v.end());
    ll res=0;
    trav(x,v){
        if(k>0){
            res+=a[x.second];
            k--;
        }
        else{
            if(a[x.second]>b[x.second])
            res+=b[x.second];
            else
            res+=a[x.second];
        }
    }
    cout<<res<<endl;
return 0;
}