// Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements
// to its left are smaller than it and all the elements to the right of it are larger than it.
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<=5;i++){
        cout<<"enter v["<<i<<"] : ";
        cin>>v[i];
    }
    int keyEle = INT_MIN;
    int leftsmaller = true;
    int rightlarger = true;
    for(int i=0;i<=5;i++){
        for(int j=0;j<i;j++){
            if(v[j]>v[i]) {leftsmaller = false;break;}
        }
        for(int k = i+1;k<6;k++){
            if(v[k]<v[i]){rightlarger = false ; break;}
        }
        if(leftsmaller && rightlarger){
            keyEle = v[i];
            cout<<"The element required is "<<keyEle;
        }
    }
}