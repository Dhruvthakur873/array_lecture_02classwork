#include<iostream>
#include<vector>
using namespace std;
void lastOccurence(vector<int>&v){
    int key;
    cout<<"enter the key whose last occurence you want to find: ";
    cin>>key;
    cout<<endl;
    int lastOccurence = 0;
    int count = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]==key){
            count++;
            lastOccurence = i;
        }
    }
    cout<<"The lastOccurence of the key is = "<<lastOccurence<<" index"<<endl;
    cout<<"The "<<key<<" is repeated "<<count<<" times";
    //if  we want just the last occurence we can do it in a better way ;
    /*
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==key){
            lastOccurence = i;
            break;
        }
*/
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<=n;i++){
        int x;
        cout<<"enter the "<<i<<" ele  of vector: ";
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;
    lastOccurence(v);
}
