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
    cin >> t;
    test(t)
    {
        int n, q;
        cin >> n >> q;
        ll prefix_sum[n];
        ll sum = 0;
        int a[n], b[q];
        f(i, 0, n, 1)
        {
            cin >> a[i];
            sum += a[i];
            prefix_sum[i] = sum;
        }

        test(q){
            int x;
            cin>>x;
            int ans = -1;
            ll small = 0;
            ll last = n-1;
            
            while (last>=small)
            {
                ll mid=(small+(last-small))/2;
                if(prefix_sum[mid]>=x){
                ans=mid+1;
                last=mid-1;
            }
            else{
                small= mid+1;
            }
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}