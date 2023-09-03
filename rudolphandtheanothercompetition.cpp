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
        ll fpoints=0, fpenalty=0;
        int rank=1;
        int n,m,h;
        cin>>n>>m>>h;
        int problems[n][m];
        f(i,0,n,1){
            ll points=0, penalty=0;
            f(j,0,m,1){
                cin>>problems[i][j];
            }
            int x=0;
            sort(problems[i], problems[i]+m);
            f(j,0,m,1){
                if(x+problems[i][j]>h){
                break;}
                else{
                    x+=problems[i][j];
                    penalty+=x;
                    points++;
                }

            }
            //cout<<"yy: "<<points<<" "<<penalty<<" ";

            if(i==0)
            {
                fpoints=points;
                fpenalty=penalty;
            }
            else{
                if(fpoints<points)rank++;
                else if(fpoints==points){
                    if(fpenalty>penalty)
                    rank++;
                }
            }
        }
        cout<<rank<<endl;
    }
return 0;
}