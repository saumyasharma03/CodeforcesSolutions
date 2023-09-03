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
    string s;
    cin>>s;
    int a=0, b=0, c=0;
    int counter=0;
    for(char ch:s){
        if(counter==0 && ch=='.'){
            counter++;
        }
        if(counter==1){
            if(ch=='A')
            a++;
            else if(ch=='B')
            b++;
            else if(ch=='C')
            c++;
        }
        if(a>0&&b>0&&c>0){
            cout<<"YES"<<endl;
            return 0;
        }
        if(counter==1 && ch=='.')
        counter--;
    }
return 0;
}