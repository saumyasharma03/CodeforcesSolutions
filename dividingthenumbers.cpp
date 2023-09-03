
/*  THE CORRECT  SOLUTION IS AT DIVIDING THE NUMBERS CORRECT*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (int variable = a; variable <= b; variable += c)
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
    vector <int> v;
    int tot1=0;
    int tot2=0;
    if(n%2!=0){
        f(i,1,n,1){
            if(i%2!=0){
            v.pb(i);
            tot1+=i;}
            else{
                tot2+=i;
            }
        }
    }
    else{
        int i=1, j=n;
        if(n>2){
        while(i<=j){
            if(i%2!=0&&j%2==0){
                tot1+=j;
                tot1+=i;
                v.pb(i);
                v.pb(j);
            }
            else{
                tot2+=i;
                tot2+=n;
            }
            ++i;
            --j;
        }
    }
    else{
        cout<<1<<endl;
        cout<<1<<" "<<1<<endl;
        return 0;
    }}

    cout<<abs(tot2-tot1)<<endl;
    cout<<v.size()<<" ";
    trav(i,v){
        cout<<i<<" ";
    }

return 0;
}