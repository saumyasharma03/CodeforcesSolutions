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
        string s;
        cin>>s;
        int n=s.length();
        string ans="YES";
        int count=0; int c=0;
        f(i,0,n,1){
            if(s[i]=='+')
            count++;
            else if(s[i]=='-')
            count--;
            else if(s[i]=='0'){
                if(count==0||count==1)
                {
                    ans="NO";
                    break;
                }
                else if(s[i+1]=='1'){
                    ans="NO";
                    break;
                }
                while(s[i]!=1&&i<=n){
                    i++;
                    if(s[i]=='-')
                    c--;
                    else if(s[i]=='+')
                    c++;
                }
                count+=c;
                if(c==0){
                    ans="NO";
                    break;
                }
                c=0;
            }
            else if(s[i]=='1'){
                if(s[i+1]=='0'){
                    ans="NO";
                    break;
                }
                while(s[i]!='0'&&i<=n){
                    i++;
                    if(s[i]=='-')
                    c--;
                    else if(s[i]=='+')
                    c++;
                }
                count+=c;
                if(c==0||count==0||count==1){
                    ans="NO";
                    break;
                }
                c=0;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}