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
#define MODmul(x, y) ((x % MOD) * (y % MOD)) % MOD;
void solve(vector<int> a, int n, vector<int> ans)
{
}
int main()
{
    int t;
    cin >> t;
    test(t)
    {
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        f(i, 0, n, 1)
        {
            int x;
            cin >> x;
            a.pb(x);
            b.pb(x);
        }
        vector<int> ans;
        int count = 1;
        while (!a.empty())
        {
            while (!a.empty() && a.back() <= 0)
            {
                a.pop_back();
            }
            ans.pb(a.size());
            cout << a.size();
            int i = a.size() - 1;
            if (a[i] == a[i - 1])
            {
                while (a[i] == a[i - 1] && i > 1)
                {
                    a[a.size() - 1] -= count;
                    i--;
                }
            }
            count++;
        }
        /*5
        5 3 3 1 1*/
        while (!a.empty() && a[a.size() - 1] > 0)
        {
            ans.pb(1);
            --a[a.size() - 1];
        }
        int flag = 0;
        f(i, 0, n, 1)
        {
            if (b[i] != ans[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}