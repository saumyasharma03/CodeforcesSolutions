
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
        int a,b,c;
        cin>>a>>b>>c;
        int anna=0,katie=0;
        if(c%2==0){
            katie=1;
        }
        else{
            anna=1;
        }
        if(a==b){
            if(anna==1){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
        if(a>b){
                cout<<"First"<<endl;
            }
        if(a<b){
                cout<<"Second"<<endl;
        }
    }
return 0;
    }