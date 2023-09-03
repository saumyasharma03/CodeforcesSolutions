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
        int x, y, n;
        cin >> x >> y >> n;
        if (y - x <= n - 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int last = y;
            vector<int> ans;
            ans.pb(y);
            int flag = 0;
            f(i, 0, n - 2, 1)
            {
                last -= i;
                ans.pb(last);
                // if(last==x)
                // flag=1;
            }
            // if(!flag)
            ans.pb(x);
            reverse(ans.begin(), ans.end());
            trav(i, ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}