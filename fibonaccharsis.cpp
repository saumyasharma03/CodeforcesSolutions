#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
const ll MOD = 100;

#define f(variable, a, b, c) for (int variable = a; variable < b; variable += c)
#define f(variable, a, b, c) for (int variable = a; variable > b; variable -= c)
#define test(n) while (n--)
#define trav(x, y) for (auto x : y)
#define endl '\n'

#define pb(v) push_back(v)
#define pp pop_back();

#define MODadd(x, y) ((x % MOD) + (y % MOD) + MOD) % MOD
#define MODsub(x, y) ((max(x, y) % MOD) - (min(x, y) % MOD) + MOD) % MOD;
#define MODmul(x, y) ((x % MOD) * (y % MOD)) % MOD

ll ans;

void solve(ll x, ll y, ll k)
{
    ll ans;
    if (x < 0 || y < 0)
    {
        return;
    }
    if (k == 0)
    {
        ans++;
        return;
    }
    solve(x - y, y, k - 1);
}
int main()
{
    int t;
    cin >> t;
    test(t)
    {
        ll n, k;
        cin >> n >> k;
        f(i, 0, n + 1, 1)
        {
            solve(i, n, k - 1);
        }
        cout << ans << endl;
        ans = 0;
    }

    return 0;
}