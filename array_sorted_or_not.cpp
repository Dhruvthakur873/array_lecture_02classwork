#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<=5;i++){
        cout<<"enter array elements";
        cin>>v[i];
    }
    bool flag = true;
    for(int i=0;i<=5;i++){
        if(v[i]>v[i+1]){
            flag = false;
        }
    }
    if(flag) cout<<"sorted";
    else cout<<"unsorted";
}