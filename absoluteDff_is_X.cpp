// Q3 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
// a pair in the array whose absolute difference is exactly x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6,7,8,9,10};
    int x ;
    cout<<"enter x: ";
    cin>>x;
    bool pairs = false;
    for(int i=0;i<=v.size()-1;i++){
        for(int j =i+1;j<v.size();j++){
            int absolutediff = abs(v[i]-v[j]);
            if(absolutediff == x){
                cout << "Pair found: (" << v[i] << ", " << v[j] << "), Absolute difference: " << x << endl;
                pairs = true;
            }
        }
    }
    if(!pairs){
        cout<<"no pairs found";
    }
}