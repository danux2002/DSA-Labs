#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void Heapify(vector<int>& arr,int i){
    int largest=i;
    int r =2*i+2;
    int L =2*i+1;
    if(arr.size()>L && arr[largest]<arr[L]){
        largest = L;
    }
    
    if(arr.size()>r && arr[largest]<arr[r]){
        largest = r;
    }
    if(largest != i){
        swap(arr[i],arr[largest]);
        Heapify(arr,largest);
    }
}
void BuildMaxHeap(vector<int>& array){
    int size = array.size();
    for(int i=size/2-1;i>=0;i--){
        Heapify(array,i);
    }
}
vector<int> HeapSort(vector<int>arrr){
    BuildMaxHeap(arrr);
    int arrrsize=arrr.size();
    for(int i=arrrsize-1; i>=0 ; i--){
        swap(arrr[0],arrr[i]);
        
        Heapify(arrr,0);
    }
    return arrr;
}

int main(){
    vector<int> A= {34,12,2,4,23,6,45};
    vector<int> B ;
    B=HeapSort(A);
    for(int x=0;x<B.size();x++){
        cout<<B[x]<<" ";
    }
}