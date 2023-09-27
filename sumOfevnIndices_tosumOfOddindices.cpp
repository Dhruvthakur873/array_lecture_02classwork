#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<=5;i++){
        cout<<"enter array elements";
        cin>>v[i];
    }
    int evensum = 0;
    int oddsum = 0;
    for(int i=0;i<6;i++){
        if(i%2==0) evensum +=v[i];
        else oddsum +=v[i];
    }
    cout<<evensum;
    cout<<oddsum;

    cout<<"difference is "<<oddsum - evensum;
}