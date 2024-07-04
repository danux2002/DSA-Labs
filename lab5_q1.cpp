#include<iostream>
#include<vector>
using namespace std;
vector<int> quickSort(vector<int> &arr){
    int pivot = arr[0];
    vector<int>left {};
    vector<int>right{};
    vector<int>equal{};
    int n = arr.size();
    for (int i=0; i<n ; i++){
        if (pivot<arr[i]){
            right.push_back(arr[i]);
        } 
        else if(pivot > arr[i]){
            left.push_back(arr[i]);
        }
        else{
            equal.push_back(arr[i]);
        }
    }
    left.insert(left.end(), equal.begin(), equal.end());
    left.insert(left.end(), right.begin(), right.end());
    
    return left;
}
int main(){
    vector<int> A ;
    vector<int> B;
    int m;
    cin>>m;
    int b ;
    while(cin >> b)
    {
        A.push_back(b);
    }
    B = quickSort(A);
    for(int i : B)
    {
        cout << i << " ";}

    }



