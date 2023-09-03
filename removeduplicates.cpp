#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (int variable = a; variable < b; variable += c)
#define fr(variable, a, b, c) for (int variable = a; variable >=b; variable -= c)
#define test(n) while (n--)
#define trav(x, y) for (auto x : y)
#define pb(v) push_back(v)
#define pp pop_back();
#define MODadd(x, y) ((x % MOD) + (y % MOD) + MOD) % MOD
#define MODsub(x, y) ((max(x, y) % MOD) - (min(x, y) % MOD) + MOD) % MOD;
#define MODmul(x, y) ((x % MOD) * (y % MOD)) % MOD
int main()
{
    int n;
    cin>>n;
    vector <int> v;
    f(i,0,n,1){
        int x;
        cin>>x;
        v.pb(x);
    }
    reverse(v.begin(), v.end());
    map<ll, int> freq;
    vector <int> res;
    trav(x,v){
        if(freq[x]==1)
        continue;
        else
        freq[x]=1;
        res.pb(x);
    }
    reverse(res.begin(), res.end());
    cout<<res.size()<<endl;
    trav(x,res){
        cout<<x<<" ";
    }

return 0;
}