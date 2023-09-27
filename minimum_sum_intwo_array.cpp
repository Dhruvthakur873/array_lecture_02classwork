// Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
// that they belong to different arrays and are not at the same index. Here 1<size<101
// For ex: a[]={5,6,10,4,9}
// b[]={1,2,3,4,5}
// Output: 5
// Explanation: a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations
// a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations
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
    int n1;
    cout<<"enter the size of vector: ";
    cin>>n1;
    vector<int>v1;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n1;i++){
        int x1;
        cout<<"enter the "<<i<<" ele  of vector: ";
        cin>>x1;
        v1.push_back(x1);
    }
    int min = INT_MAX;
    int i = 0;
    int j = i+1;
    for(int i = 0;i<n;i++){   
        for(int j=0;j<n1;j++){
            if(i!=j){
                int sum = v[i]+v1[j];
                if(sum<min){
                    min = sum;
                }
            }
        }
    }   
    cout<<min;
}
