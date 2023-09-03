#include <bits/stdc++.h>
using namespace std;

int main() {
    int l,r,a; int c=0;
    cin>>l>>r>>a;
    int min = l>r?r:l;
    int max= l>r?l:r;
    int diff= max-min;
    if(diff==0){//both teams are equal from the start
    max+=a/2;
    min+=a/2;
    }
    else{
        if(a>=diff){ //we need diff to make them equal
            min+=diff;
            a-=diff;
            min+=a/2;
            max+=a/2;
        }
        else{ //if a<diff then add a to make both left and right equal
            min+=a;
        }
    }
    cout<<(2*min)<<endl;
}