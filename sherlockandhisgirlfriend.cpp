
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

int isprime(int n){
    f(i,2,n/2,1){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int colors[n];
    int start=2;
    int count1=0, count2=0;
    f(i,0,n-1,1){
        if(isprime(start)){
            colors[i]=1;
            count1=1;
        }
        else{
            colors[i]=2;
            count2=1;
        }
        start++;
    }
    cout<<count1+count2<<endl;
    f(i,0,n-1,1){
        cout<<colors[i]<<" ";
    }
return 0;
}