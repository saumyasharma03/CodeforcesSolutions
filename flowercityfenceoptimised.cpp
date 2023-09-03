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

    test(t)
    {
        int n;
        cin >> n;
        int a[n+1];
        f(i, 1, n+1, 1)
        {
            cin >> a[i];
        }
        if (a[1] != n)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> b;
        fr(i, n, 0, 1)
        {
            while (b.size() < a[i])
            {
                b.pb(i);
            }
        }
        int flag = 0;
        f(i, n, 0, 1)
        {
            if (a[i] != b[i + 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag==1)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}