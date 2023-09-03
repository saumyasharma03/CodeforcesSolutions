#include <bits/stdc++.h>
using namespace std;
//this code below is only correct for positives and not 
//when we have zeroes and negatives in the array
//[2,0,0,3] looking for longest subarray with this technique we find
//[2,0,0] in one array and [3] in the other which is incorrect
//you have to look at the leftmost place for x-k, ie,leftmost [2] or k.
int longestsubarraywithsumk(vector <int> a, long long k){
    map<long long, int> preSumMap;
    long long sum=0;
    int maxlen=0;
    for(int i=0; i<a.size(); i++){
        sum+=a[i];
        if(sum==k){
            maxlen= i+1;
        }
        long long rem= sum-k;
        if((preSumMap.find(rem))!=preSumMap.end()){
            int len= i-preSumMap[rem];
            maxlen= max(maxlen, len);
        }
        {
           //we added this part so that we can find the leftmost x-k in the array
            if((preSumMap.find(sum))==preSumMap.end()){
                preSumMap[sum]=i;
            }
        preSumMap[sum]=i;
        }
    }
    return maxlen;
}
//NOTE THAT IF THE PROBLEM STATEMENT HAD BOTH POSITVIES AAND NEGATIVES 
//(AND ZEROES) THIS IS THE MOST OPTIMAL CODE, HOWEVER FOR ONLY
//ZEROES AND POSITIVES THIS CODE CAN BE OPTIMISED FURTHER.

int sumlongestsubarrsumkwithzeropositves(vector <int> a, long long k){
    int left =0, right =0;
long long sum=a[0];
int maxlen=0;
int n=a.size();
while(right<n){
    //first move then add
    while(left<=right && sum > k){
        sum-=a[left];
        left++;
        //subtract left and move ahead
    }
    if(sum==k){
        maxlen= max(maxlen, right-left+1);
    }
    right++;
    if(right<n)
    sum+= a[right];
}
return maxlen;
}
//time complexity is not O(N^2) but it is O(2N) sc O(1)
int main(){

}