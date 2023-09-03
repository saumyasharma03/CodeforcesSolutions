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
    int flag=0;
    stack <int> st;
    int a=0,b=0,c=0;
    for(int i=0; i<s.length(); i++){
        if(st.empty()){
        if(s[i]=='.'){
            st.push(s[i]);
            flag=1;
        }}
        else if(flag==1&&s[i]!='.'){
            st.push(s[i]);
        }
        else if(s[i]=='.'){
            flag=0;
        st.pop();
        while(st.top()!='.'){
            if(st.top()=='A')
            a=1;
            else if(st.top()=='B')
            b=1;
            else if(st.top()=='C')
            c=1;
            st.pop();
        }
        st.pop();
        if(a==1&&b==1&&c==1){
            cout<<"YES"<<endl;
            return 0;
        }
        }
    }
    cout<<"NO"<<endl;
return 0;
}