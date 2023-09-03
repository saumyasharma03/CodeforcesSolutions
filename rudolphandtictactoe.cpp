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
        string res = "DRAW";
        string s[3];

        f(i, 0, 3, 1)
        {
            cin >> s[i];
        }
        f(i, 0, 3, 1)
        {
            if (s[i][0] == s[i][1] && s[i][1] == s[i][2] && s[i][2] == s[i][0])
            {
                if (s[i][0] != '.')
                    res = s[i][0];
            }
        }
        f(i, 0, 3, 1)
        {
            if (s[0][i] == s[1][i] && s[1][i] == s[2][i] && s[2][i] == s[0][i])
            {
                if (s[0][i] != '.')
                    res = s[0][i];
            }
        }
        if (s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[2][2] == s[0][0])
        {
            if (s[0][0] != '.')
                res = s[0][0];
        }
        else if (s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[2][0] == s[0][2])
        {
            if (s[0][2] != '.')
                res = s[0][2];
        }
        cout << res << endl;
    }
    return 0;
}