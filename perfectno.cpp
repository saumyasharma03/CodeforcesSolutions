#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int sumdig(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{   int count=0;
    int k;
    cin>>k;
    for(int i=19;;i+=9){
        if(sumdig(i)==10)
        count++;
        if(count==k){
        cout<<i<<endl;
        break;}
    }
      return 0;
}