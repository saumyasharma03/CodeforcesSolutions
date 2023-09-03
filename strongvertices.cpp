
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
    int t;
    cin>>t;
    test(t){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        f(i,0,n,1){
            cin>>a[i];
        }
        f(i,0,n,1){
            cin>>b[i];
        }
        vector <pair<int,int>> v;
        f(i,0,n,1){
            v.pb(make_pair(a[i]-b[i],i));
        }
        vector <int> ans;
        sort(v.begin(), v.end());
        int maxdiff=v.back().first;
        trav(i,v){
            if(i.first==maxdiff)
            ans.pb(i.second);
        }
        cout<<ans.size()<<endl;
        trav(i,ans){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}