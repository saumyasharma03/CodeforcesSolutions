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
    test(t){
        string s;
        cin>>s;
        string s2;
        cin>>s2;
        string ans="no";
        f(i,0,s.length()-1,1){
            //cout<<s[i]<<" "<<s2[i]<<endl;
            if(s[i]=='0'&&s[i+1]=='1'&&s2[i]=='0'&&s2[i+1]=='1'){
                ans="yes";
                break;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}