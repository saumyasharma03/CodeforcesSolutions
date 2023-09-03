
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
    string s;
    cin>>s;
    int flag=0;
    int count=0;
    if(s.length()%2!=0){
        cout<<"no"<<endl;
        return 0;
    }
    f(i,0,s.length(),1){
        if(s[i]=='('){
            count++;
        }
        if(s[i]==')'){
            count--;
        }
        if(count<-1){
            flag=1;
            break;
        }
    }
    if(count==0&&flag==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
return 0;
}