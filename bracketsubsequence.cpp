
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
    int k;
    cin>>k;
    string s;
    cin>>s;
    int open=k/2;
    int closed=k/2;
    string res;
    int x=0;
    
    for(int i=0; i<n; i++){
        if(s[i]=='('){
            if(open>0){
            x++;
            res+='(';
            open--;
            
        }}
        else{
            if(closed>0&&x>0){
                res+=')';
                --closed;
                --x;
                
            }
        }
    }
    cout<<res<<endl;
return 0;
}
/*40 30
((((((((()()()))))))))((())((()())))(())*/