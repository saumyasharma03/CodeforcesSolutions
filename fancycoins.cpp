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
    ll t;
    cin>>t;
    test(t){
        ll m;
        cin>>m;
        ll k,a1,ak;
        cin>>k>>a1>>ak;
        ll total=a1+k*ak;
        int remainder= m%k;
        m-=(ak*k);
        if(m<0) m= remainder;
        m-=a1;
        if(m<=0)cout<<0<<endl;
        else{
            int fcoins= m/k; //number of fancy coins of ak value to be used on the remaining n
            int rem2= m%k; //current remainder of m after subtracting the total of a1 and ak coins we had
            int gap=INT_MAX; //gap that is needed to cover to make remaining coins a multiple of k
            if(rem2!=0)gap=k-rem2;
            if(gap<=a1){//checking if the gap can be created by reducing a1,ie, if we can make m a multiple of k just by reducing a1
                fcoins++;
            }
            else{
                fcoins+=rem2;
            }
            cout<<fcoins<<endl;
        }
    }
return 0;
}