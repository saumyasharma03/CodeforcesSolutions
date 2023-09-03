
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
    int l,r,a;
    cin>>l>>r>>a;
    int li=l/a;
    int ri=r/a;
    int total=0;
    if(li==ri){
        total+=ri;
        total+=(r%a);
    }
    else{
        if(r%a==(a-1)){
        total+=ri;
        total+=(a-1);}
        else{
            total+=ri-1;
        total+=(a-1);
        }
    }
    cout<<total<<endl;
    }
return 0;
}