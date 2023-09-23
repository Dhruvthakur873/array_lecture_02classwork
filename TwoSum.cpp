#include<iostream>
#include<vector>
using namespace std;
void TwoSum(vector<int>&v){
    int key;
    cout<<"enter the key: ";
    cin>>key;
    cout<<endl;
    int count=0;
    for(int i=0;i<=v.size()-2;i++){
        for(int j=+1;j<v.size();j++){
            if(v[i]+v[j]==key){
                count++;
                cout<<"The sum of "<<v[i]<<" at index"<<i <<" and "<<v[j]<<" at index "<<j<< " is equal to the "<<key<<endl;
            }
        }
    }
    cout<<"There are "<<count<<" pairs whose sum is equal to "<<key<<endl;
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
    TwoSum(v);

}