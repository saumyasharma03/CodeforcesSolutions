
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
#define MODsub(x, y) ((max(x, y) % MOD) - (min(x, y) % MOD) + MOD) % MOD
#define MODmul(x, y) ((x % MOD) * (y % MOD)) % MOD
int main()
{
    string name1="";
    string name2="";
    cin>>name1>>name2;
    int n;
    cin>>n;
    vector <pair<string, string>> v;
    vector <pair<string, string>> v2;
    v.pb(make_pair(name1,name2));
    f(i,0,n,1){
        cin>>name1>>name2;
        v.pb(make_pair(name1,name2));
    }
    v2.pb(make_pair(v[0].first,v[0].second));
    f(i,0,n,1){
        name1=v2[i].first;
        name2=v[i+1].first;
        if(name1.compare(name2)==0){
            v2.pb(make_pair(v2[i].second,v[i+1].second));
        }
        else{
            v2.pb(make_pair(name1, v[i+1].second));
        }
    }
    cout<<endl;
    trav(x,v2){
        cout<<x.first<<" "<<x.second<<endl;
    }
return 0;
}