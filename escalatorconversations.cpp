
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
        int n,m,k,h;
        cin>>n>>m>>k>>h;
        int a[n];
        f(i,0,n,1){
            cin>>a[i];
        }
        int c=0;
        f(i,0,n,1){
            if((abs(h-a[i])%k)==0&& (h-a[i])!=0){
            if((abs(h-a[i])/k)<=(m-1)){
                c++;
            }}
        }
        cout<<c<<endl;
    }
return 0;
}