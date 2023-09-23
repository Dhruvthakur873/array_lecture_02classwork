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
   // Reverse the vector
    int start = 0;
    int end = v.size() - 1;

    while (start < end) {
        // Swap elements at start and end
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }
    
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i];
    }
    

}