#include <bits/stdc++.h>
using namespace std;
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
    int n, s;
    cin >> n >> s;
    //vector<pair<int, int>> vp;
    int min = INT_MAX;
    int max = 0;
    set <int> se;
    f(i, 0, n, 1)
    {
        int x, y;
        cin >> x >> y;
        if (x < s)
            se.insert(y);
        else if(x==s&&y==0)
            se.insert(0);
        //vp.push_back(make_pair(x, y));
    }

    if(se.empty()){
        cout<<-1;
        return 0;
    }
    else if(*(se.begin())==0){
        cout<<0;
        return 0;
    }
    else{
        cout<<100-*(se.begin());
        return 0;
    }

    return 0;
}