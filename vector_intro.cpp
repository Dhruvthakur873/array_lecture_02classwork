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
}