
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (int variable = a; variable <=b; variable += c)
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
        int n,m,d;
        cin>>n>>m>>d;
        int a[m];
        f(i,0,m-1,1){
            cin>>a[i];
        }
        vector <int> diff;
        // int x=1;
        f(x,1,n,d){
            diff.pb(x);
        }
        int q=diff.size();
        int count=0;
        vector<int>:: iterator x=diff.begin();
        for(int i=0; i<m; i++){
            if(find(x, diff.end(), a[i])!=diff.end()){
                continue;
            }
            else{
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}