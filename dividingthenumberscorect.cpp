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
    vector<int> ans;
    if(n%4==0){
        cout<<0<<endl;
        for(int i=1; i<=n;){
            ans.pb(i);
            if(i%4!=0)
            i+=3;
            else
            i++;
        }
    }
    else if(n%4==1){
        cout<<1<<endl;
        for(int i=2; i<=n;){
            ans.pb(i);
            if(i%4!=1)
            i+=3;
            else
            i++;
        }
    }
    else if(n%4==2){
        cout<<1<<endl;
        ans.pb(2);
        for(int i=3; i<=n;){
            ans.pb(i);
            if(i%4!=2)
            i+=3;
            else
            i++;
        }
    }
     else if(n%4==3){
        cout<<0<<endl;
        ans.pb(3);
        for(int i=4; i<=n;){
            ans.pb(i);
            if(i%4!=3)
            i+=3;
            else
            i++;
        }
    }
    cout<<ans.size()<<" ";
    trav(i,ans){
        cout<<i<<" ";
    }
    

return 0;
}