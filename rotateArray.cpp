#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&v,int s,int e){
        for(int i=s, j=e;i<=j;i++,j--){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}
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
   // Reverse the part of vector

    int key;
    cout<<"Enter the value of k: ";
    cin>>key;
    if(key>n){
        key %=v.size();
    }

    reverse(v,0,(v.size() - key)-1);
    reverse(v,v.size() - key,v.size() - 1);
    reverse(v,0,v.size()-1);

    
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i];
    }
}