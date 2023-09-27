#include<bits/stdc++.h>
using namespace std;
void arrayPArtRotate(int *v,int start,int end){
    int i=start;
    int j = end;
    for(;i<=j;){
        swap(v[i++],v[j--]);
    }
    
}

int main(){
        int v[] = {1,2,3,4,5,5,6,7};
        int k;
        cout<<"enter the value of k";
        cin>>k;
        int size = sizeof(v)/sizeof(v[0]);
        if(k>size){
            k = k%size;
        }
        arrayPArtRotate(v,0,(size-k)-1);
        arrayPArtRotate(v,size-k,size-1);
        arrayPArtRotate(v,0,size-1);

    for(int i=0;i<8;i++){
        cout<<v[i];
    }     
}