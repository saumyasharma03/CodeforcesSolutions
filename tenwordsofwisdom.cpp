
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
        int n,x,y;
        cin>>n;
        int max=-1;
        int maxind=-1;
        map<pair<int,int>,int, greater<int>> m;
        f(i,0,n,1){
            cin>>x;
            cin>>y;
            if(x>10)
            continue;
            if(y>max){
            max=y;
            maxind=i;}
        }
        cout<<maxind+1<<endl;
    }
return 0;
}