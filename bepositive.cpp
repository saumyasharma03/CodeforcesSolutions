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
    int half=ceil((double)n/2);
    int a[n];
    int mini=INT_MAX;
    int countp=0, countn=0, countz=0;
    f(i,0,n,1){
        cin>>a[i];
    }
    f(i,0,n,1){
        if(a[i]>0){
            countp++;
        }
        else if(a[i]<0){
            countn++;
        }
        else{
            countz++;
        }
    }
        if(countp>=half)
        cout<<1<<endl;
        else if(countn>=half)
        cout<<-1<<endl;
        else
        cout<<0<<endl;
return 0;
}