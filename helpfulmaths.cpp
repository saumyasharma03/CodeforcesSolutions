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
    string s;
    cin>>s;
    int n=s.length();
    vector <int> a;
    f(i,0,n,1){
        if(s[i]!='+'){
            //cout<<(static_cast<int>(s[i]-'0'));
            a.push_back((static_cast<int>(s[i]-'0')));
        }
    }
    sort(a.begin(), a.end());
    f(i,0,a.size(),1){
        if(i==a.size()-1){
            cout<<a[i];
        }
        else{
        cout<<a[i]<<'+';}
    }
return 0;
}