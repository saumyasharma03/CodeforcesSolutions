
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (int variable = a; variable < b; variable += c)
#define fr(variable, a, b, c) for (int variable = a; variable >=b; variable -= c)
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
        int n;
        cin>>n;
        int a[n];
        int ind1=-1, ind2=-1;
        f(i,0,n,1){
            cin>>a[i];
        }
        vector <int> b;
        vector <int> c;
        sort(a,a+n);
        b.pb(a[0]);
        f(i,1,n,1){
            if(a[0]==a[i]){
                b.pb(a[i]);
            }
            else{
                c.pb(a[i]);
            }
        }
        if(c.size()==0){
            cout<<-1<<endl;
        }
        else{
        cout<<b.size()<<" "<<c.size()<<endl;
        trav(i,b){
            cout<<i<<" ";
        }cout<<endl;
        trav(i,c){
            cout<<i<<" ";
        }cout<<endl;
    }}
return 0;
}