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
        int n,m;
        cin>>n>>m;
        vector<vector <char>> s(n, vector<char>(m));
        f(i,0,n,1){
            f(j,0,m,1){
                char c;
                cin>>c;
                 s[i][j] = c;
            }
        }
        int flag=0;
        char x[]={'v','i','k','a'};
        int k=0;
        f(i,0,m,1){
            f(j,0,n,1){
                if(s[j][i]==x[k]){
                    k++;
                    //cout<<s[j][i];
                    flag++;
                    //cout<<flag<<endl;
                    break;
                }
            }
        }
        if(flag==4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}