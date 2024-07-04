#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int> closestNumbers(vector<int> & vec){
    int n = vec.size();
    vector <int> different;
    for(int i=0;i<n-1;i++){
        different.push_back(abs(vec[i+1]-vec[i]));
    }
    int min = different[0];
    for(int j=0;j<n-2;j++){
        if(min>different[j+1]){
            min=different[j+1];
        }
        else{
            continue;
        }
    }
    vector<int> final;
    for(int k=0;k<n-1;k++){
        if(min==(vec[k+1]-vec[k])){
            final.push_back(vec[k]);
            final.push_back(vec[k+1]);
        }
        else{
            continue;
        }
    }
    return final;
    

}

int main(){
    int n=12;
    //cin>>n;
    int arr[]={-20,-3916237,-357920,-3620601,7374819,-7330761,30,6246457,-6461594,266854,-520,-470};
    sort(arr, arr + n);
    vector<int> vec(arr, arr + n);
    vector<int> f=closestNumbers(vec);
    for(int i=0;i<f.size();i++){
        cout<<f[i]<<" ";
    }

}