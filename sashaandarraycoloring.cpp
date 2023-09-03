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
#define MODmul(x, y) ((x % MOD) * (y % MOD)) % MOD;

int solve(int a[],int n, int i){
    if(n<1||i>=n){
        return 0;
    }
    else if(n==1){
        return (a[n]-a[i]);
    }
    else{
        //  cout<<(a[n]-a[i])<<" ";
        return (a[n]-a[i])+solve(a, --n, ++i);
    }
}
int main()
{
    int t;
    cin>>t;
    test(t){
        int n;
        cin>>n;
        int a[n];
        f(i,0,n,1){
            cin>>a[i];
        }
        sort(a,a+n);
        int total=0;
        total= solve(a, n-1, 0);
        cout<<total<<endl;
    }
return 0;
}