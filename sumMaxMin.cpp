// Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present
// in the array. Here 1< size <101
// For ex: arr[]={1,2,3,4,5} n=5
// Output: 6
// Explanation: The smallest number in the array is 1 and the greatest numbers in the array is 5, so the sum
// will be 1+5=6
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cout<<"enter the "<<i<<" ele  of vector: ";
        cin>>x;
        v.push_back(x);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int ele:v){
        if(ele>max) max = ele;
        if(ele<min) min = ele;
    }
    cout<<min + max;
}