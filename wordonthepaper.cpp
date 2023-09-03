
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
        string s[8];
        vector<char> v;
        f(i, 0, 8, 1)
        {
            cin >> s[i];
        }
        f(i, 0, 8, 1)
        {
            f(j, 0, 8, 1)
            {
                if (s[i][j] != '.')
                {
                    v.pb(s[i][j]);
                }
            }
        }
        trav(i, v)
        {
            cout << i;
        }
        cout<<endl;
    }
    return 0;
}