// Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of vector: ";
    cin>>size;
    vector<int>arr;
    
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    int odd = 0;
    int even = 0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            even++;
        }
        else odd++;
    }
    cout<<"odd numbers is = "<<odd<<" and even numbers is = "<<even;

}
