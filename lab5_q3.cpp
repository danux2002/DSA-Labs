#include<iostream>
#include<vector>
#include <algorithm>
#include<cmath>
using namespace std;
vector<int> closestNumbers(vector<int> & arr){
    sort(arr.begin(),arr.end());
    vector<int> arr1;
    for(int i=0;i<arr.size()-1;i++){
        arr1.push_back(abs(arr[i+1]-arr[i]));
    }
    int min = arr1[0];
    
    vector<int> arr3;
    for (int i=0;i< arr.size()-1;i++){
        
        if (min > abs(arr1[i]-arr1[i+1])){
            min =abs(arr1[i]-arr1[i+1]);
        }
    }
    for(int j=0;j<arr.size()-1;j++){
        if(min == arr[j]){
            arr3.push_back(arr1[j]);
            arr3.push_back(arr1[j+1]);
        }
    }
    return arr3;
}
int main(){
    int n=12;
    
    int arr[]={-20,-3916237,-357920,-3620601,7374819,-7330761,30,6246457,-6461594,266854,-520,-470};
    
    vector<int> vec(arr, arr + n);
    vector<int> f=closestNumbers(vec);
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<" ";
    }
}