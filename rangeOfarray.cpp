

// Q5 - Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
// both 0 and n). Find and return the only number of the range that is not present in the array. 
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<=5;i++){
        cout<<"enter array elements";
        cin>>v[i];
    }
    int min_ = INT_MAX;
    int max_ = INT_MIN;
    for(int i=0;i<6;i++)
    {
        min_ = min(v[i],min_);
        max_ = max(v[i],max_);
    }
    cout<<"["<<min_-1<<" : "<<max_<<"]";
}
