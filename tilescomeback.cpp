
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
        int a[n];
        f(i,0,n,1){
            cin>>a[i];
        }
        int x=a[0],y=a[n-1];
        int el1=0, el2=0;
        f(i,0,n,1){
            if(x==a[i])
            el1++;
            if(el1>=k){
            if(a[n-1]==a[i])
            el2++;}
        }
        if(el1>=k&&el2>=k || (x==y&& el1>=k))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
return 0;
}