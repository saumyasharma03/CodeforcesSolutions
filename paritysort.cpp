
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
        int n;
        cin >> n;
        int a[n];
        int s[n];
        f(i, 0, n, 1)
        {
            cin >> a[i];
            s[i] = a[i];
        }
        sort(s, s + n);
        int flag = 0;
        f(i, 0, n, 1)
        {
            if ((s[i] % 2 == 0 && a[i] % 2 != 0) || (s[i] % 2 != 0 && a[i] % 2 == 0))
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}