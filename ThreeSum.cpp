// Q6 - Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
// that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
// given by the user.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9,10};
    int key;cin>>key;
    int count = 0;
    for(int i=0;i<v.size();i++){
        int j= i+1;;int k = j+1;
        int firstfixed = key - v[i];
       while(j<v.size()&&k<v.size()){
        if(v[j]+v[k] == firstfixed){
            cout<<"The sum of "<<v[i]<<","<<v[j]<<" and "<<v[k]<<" on idices ("<<i<<","<<j<<","<<k<<") is equal to the "<<key<<endl;
            count++;
        }
        j++;
        k++;
       } 
    }
    cout<<"There are "<<count<<" pairs whose sum is equal to "<<key<<endl;
}