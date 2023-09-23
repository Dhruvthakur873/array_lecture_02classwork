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
    int s,e;
    cout<<"Enter starting index from where you want to  reverse: ";
    cin>>s;
    cout<<"Ending index from where you want to  reverse: ";
    cin>>e;
    reverse(v,s,e);
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i];
    }
}