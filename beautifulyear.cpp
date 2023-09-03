
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
    int year;
    cin>>year;
    int flag= 1;
    while(flag){
        ++year;
        int a= year/1000;
        int b= year/100 %10;
        int c=year/10 %10;
        int d= year%10;
        if(a!=b&&b!=c&&c!=d&&d!=a&&a!=c&&b!=d){
            flag=0;
        }
    }
    cout<<year<<endl;
return 0;
}