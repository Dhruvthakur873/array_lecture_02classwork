
// Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
// two arrays into a single sorted array of size m+n.
#include<iostream>
#include<vector>
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
        int x;
        cout<<"enter the "<<i<<" ele  of vector: ";
        cin>>x;
        v1.push_back(x);
    }
 
    vector<int>v3(n+n1);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<n1){
        if(v[i]<v1[j]) {
            v3[k++] = v[i++];
        }else{
           v3[k++] = v1[j++]; 
        }
    }
    while(i<n){
        v3[k++] = v[i++];
    }
        
    while(j<n1){
        v3[k++] = v1[j++];
    }

    for(int i = 0;i<v3.size();i++){
        cout<<"array["<<i<<"] = ";
        cout<<v3[i]<<endl;
    }


}
