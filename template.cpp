/*
    || धर्मं चर। धर्मान्न प्रमदितव्यम् ||
*/

#include <bits/stdc++.h>
using namespace std;

#define f(variable,s,e,j) for(ll variable = s ; variable < e ; variable+=j)
#define fr(variable,s,e,j) for(ll variable = s ; variable > e ; variable-=j)
#define test(n) while(n--)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define trav(x,y) for(auto x : y)
#define endl '\n'
#define mems(x,y) memset(x , (y), sizeof(x));

using ll = long long;
using ld = long double;
const ld Pi = 3.141592653589793238462643;
const ld e = 2.718281828459045235360;
const ll MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Code Here.

    int len,num;

    cin >> len >> num;

    if(len>=4)
    {
        string ans ="2520";

        len -= 4;

        while(len>0)
        {
            ans += '0';
            len--;
        }
    
        cout << ans << endl;
    }

    else
    {
        if(len == 3)
        {
            if(num != 7)
                cout << 720 << endl;
            else
                cout << 700 << endl;
        }

        else if(len == 2)
        {
            if(num == 5 || num == 7 || num == 10)
                cout << 70 << endl;

            else
                cout << 72 << endl;
        }

        else
            cout <<((num == 10)?-1:num)<< endl;
    }


    return 0;
}
