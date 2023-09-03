#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
const ll MOD = 100;
#define f(variable, a, b, c) for (int variable = a; variable < b; variable += c)
#define fr(variable, a, b, c) for (int variable = a; variable >b; variable -= c)
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
        int n;
        cin>>n; int k;
        cin>>k;
        int a[n];
        int flag=0;
        int last=-1;
        f(i,0,n,1){
            cin>>a[i];
        }
        if(n==1){
            cout<<"0"<<endl;
            continue;
        }
        sort(a, a+n);
        // fr(i,n-1,0,1){
        //     if(a[i]-a[i-1]>k){
        //         if(i<n-i){
        //         cout<<i<<endl;
        //         flag=1;
        //         break;
        //     }
        //     else{
        //         cout<<n-i<<endl;
        //         flag=1;
        //         break;

        //     }
        // }}
        int ans=0;
        int i=0, j=0;
        while(i<n-1&&j<n-1){
            if((abs(a[j]-a[j+1]))<=k){
                j++;
            }
            else if(ans<=n-j){
                ans+=j-i+1;
                //cout<<"ans= "<<ans<<endl;
                j++;
                i=j;
            }
            else{
                ans=n-j;
                break;
            }
        }
        cout<<ans;
    }
return 0;
}