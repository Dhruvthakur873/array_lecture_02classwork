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
    vector<int>v2(v.size());
    for(int i=0;i<=v2.size()-1;i++){
        v2[i] = v[v.size()-1-i];
    }
    for(int i=0;i<=v2.size()-1;i++){
        cout<<v2[i];
    }
}