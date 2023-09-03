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
    string s;
    cin>>s;
    f(i,0,s.length(),1){
        if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]
			&& s[i]!='.' && s[i+1]!='.' && s[i+2]!='.'){
                cout<<"YES"<<endl;
                return 0;
    }
    }
    cout<<"NO"<<endl;
return 0;
}
