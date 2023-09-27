#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,1,3,2,2};
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]==v[j]){
                v[i] = v[j] = INT_MIN;
            }
        }
    }
    for(int i=0;i<v.size();i++){
        if(v[i]>INT_MIN){
            cout<<v[i]<<"THis is the unique element";
        }
    }
}