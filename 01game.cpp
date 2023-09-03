#include <bits/stdc++.h>
using namespace std;
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
        string st;
        cin >> st;
        int n = st.length();
        vector<char> s;
        vector<char>::iterator it1;
        f(i, 0, n, 1)
        {
            s.pb(st[i]);
        }
        int c = 1;
        int flag = 0;
        f(i, 0, s.size() - 1, 1)
        {
            if (c % 2 == 1)
            {
                while ( i < s.size() - 1&& s[i] == s[i + 1])
                {
                    i++;
                }
                if (i < s.size() - 1)
                {
                    c++;
    
                    s.erase( s.begin() + i,  s.begin() + i+2);
                    flag = 1;
                }
                else{
                    break;
                }
            }
            else
            {
                while ( i < s.size() - 1&& s[i] == s[i + 1])
                {
                    i++;
                }
                if (i < s.size() - 1)
                {
                    it1 = s.begin() + i;
                    s.erase(it1, it1+2);
                    c++;
                    flag = 0;
                }
                else{
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }
    return 0;
}