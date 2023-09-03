
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
    int m;
    cin>>m;
    int x=0;
    vector <int> a;
    f(i,0,n,1){
        cin>>x;
        a.pb(x);
    }
    int maxi=0, ind=0;
    int i=0;
   f(i,0,n,1){
    if(ceil((double)a[i]/m)>=maxi){
        maxi=ceil((double)a[i]/m);
        ind=i;
        
    }}
    cout<<ind+1<<endl;
return 0;
}