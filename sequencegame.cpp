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
    int t;
    cin >> t;
    test(t)
    {
        int n;
        cin>>n;
        int a[n];
        f(i,0,n,1){
            cin>>a[i];
        }
        vector<int> ans;
        fr(i,n-1,0,1){
            
            if(a[i]<a[i-1]&& i!=0){
                //cout<<a[i]<<" ";
                ans.pb(a[i]);
                ans.pb(a[i]);
            }
            else{
                ans.pb(a[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans.size()<<endl;
        f(i,0,ans.size(),1){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}