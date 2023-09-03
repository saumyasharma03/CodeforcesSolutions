
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (int variable = a; variable < b; variable += c)
#define fr(variable, a, b, c) for (int variable = a; variable >= b; variable -= c)
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
        vector <int> a;
        int n2 = (n * (n - 1)) / 2;
        int b[n2];
        // map<int, int> m;
        f(i, 0, n2, 1)
        {
            cin >> b[i];
            // m[b[i]]++;
        }
        sort(b, b+n2);
        int ind=0;
        int x=n-1;
        while(x>0)
        {
            a.pb(b[ind]);
            ind+=x--;
        }
        a.pb(1e9);
        f(i, 0, n, 1)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}