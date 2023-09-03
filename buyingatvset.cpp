#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll a, b, x, y;
    ll countw = 0, counth = 0;
    cin >> a >> b >> x >> y;
    ll hcfe = __gcd(x, y);
    x /= hcfe;
    y /= hcfe;
    // double ar =x / y;
    ll i = 1, j = 1;
    cout << min(a/x, b/y);
    return 0;
}