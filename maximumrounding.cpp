
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (int variable = a; variable < b; variable += c)
#define fr(variable, a, b, c) for (int variable = a; variable >= b; variable -= c)
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
    cin >> t;
    test(t)
    {
        string s;
        cin>>s;
        int n= s.length();
        int ind=n-1;
        int next=0;
        int pos=-1;
        while(ind>-1){
            if(s[ind]-'0'>='5'){
                next=ind-1;
                while(next>-1&&(s[next]=='9')){
                    next--;
                }
                if(next==-1){
                    pos=1;
                    s='1'+s;
                    break;
                }
                else{
                    ind=next;
                    pos=next-1;
                    int c=s[ind]-'0';
                    c++;
                    s[ind]=(char)(c+'0');
                }
            }
            else{
                --ind;
            }
        }
        f(i,pos,n,1){
        s[i]='0';
        }
        cout<<s<<endl;
    }
    return 0;
}