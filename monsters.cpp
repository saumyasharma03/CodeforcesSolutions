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
    cin>>t;
    test(t){
    int n,k;
    cin>>n>>k;
    vector <int> zeroes;
    map<int, vector<int>, greater<int>> m;
    int a[n];
    f(i,0,n,1){
        cin>>a[i];
        //divisible by k will be killed first
        if(a[i]%k==0) zeroes.pb(i+1);
        //non divisible will be killed in dec order of their remainders
        else m[a[i]%k].pb(i+1);
    }
    f(i,0,zeroes.size(),1){
        cout<<zeroes[i]<<" ";
    }
    trav(x,m){
        trav(y,x.second){
        cout<<y<<" ";
        }
    }
    }
    
return 0;
}