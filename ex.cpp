#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int getmin(vector<int> & arr1,int n){
    int minimum = arr1[0];
    for(int i=0;i<n-2;i++){
        if(minimum>arr1[i+1]){
            minimum=arr1[i+1];
        }
        }
    return minimum;

}
vector<int> closestNumbers(vector<int> & vec){
    int numrofel = vec.size();
    vector <int> different;
    for(int j=0;j<numrofel-1;j++){
        different.push_back(abs(vec[j+1]-vec[j]));
    }
   
    int Minimum = getmin(different,numrofel);
    vector<int> arr2;
    for(int k=0;k<numrofel-1;k++){
        if(Minimum==(vec[k+1]-vec[k])){
            arr2.push_back(vec[k]);
            arr2.push_back(vec[k+1]);
        }
    }
    return arr2;
}

int main(){
    int n=10;
    
    int arr[]={-20,-3916237,-357920,-3620601,7374819,-7330761,30,6246457,-6461594,266854};
    sort(arr, arr + n);
    vector<int> vec(arr, arr + n);
    vector<int> f=closestNumbers(vec);
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<" ";
    }

}