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
    int n;
    cin>>n;
    int x;
    cin>>x;
    string s;
    cin>>s;
    while(x--){
        f(i,1,n,1){
            if(s[i]=='G'&&s[i-1]=='B')
            {
            s[i]='B';
            s[i-1]='G';
            ++i;
        }}
    }
    cout<<s;
return 0;
}