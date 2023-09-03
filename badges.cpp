#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{   
    int b,g,n; int i=0;
    cin>>b>>g>>n;
    int x= min(b,n);
    int y=min(g,n);
    cout<<(x-(n-y)+1)<<endl;
}