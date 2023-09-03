
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
        string s;
        cin >> s;
        
        string res = "";
        int n = s.length();
        int flag = -1;
        cout<<flush;
        
        if (s.length() == 2)
        {
            if (s[0] == '(' && s[1] == ')')
            {
                cout << "NO" << endl;
                
                continue;
            }
        }
        f(i, 0, n, 1)
        {
            if (s[i] == ')' && s[i + 1] == '(')
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            f(i, 0, n, 1)
            {
                res += '(';
            }
            f(i, 0, n, 1)
            {
                res += ')';
            }
            cout << "YES" << endl;
            
            cout << res << endl;
            
        }
        else
        {
            f(i, 0, 2 * n, 1)
            {
                if (i % 2 == 0)
                {
                    res += '(';
                }
                else
                {
                    res += ')';
                }
            }
            cout << "YES" << endl;
            cout << res << endl;
            
        }
    }

    return 0;
}