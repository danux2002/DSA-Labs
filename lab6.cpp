#include <bits/stdc++.h>
using namespace std;
int twoStacks(int maxSum, vector<int> a, vector<int> b) {
    int i,j=0;
    int sum,num=0;
    int size_a = a.size();
    int size_b = b.size();
    while (i<size_a && j<size_b &&+ sum<=maxSum){
        if(a[i]<b[j]){
            sum=sum+a[i];+ 
            i++;
            num++;
            continue;
        }
        else{
            sum=sum+b[j];
            num++;
            j++;
            continue;
        }
    }
    while (i < size_a && sum + a[i] <= maxSum) {
        sum =sum + a[i];
        i++;
        num++;
    }

    while (j < size_b && sum + b[j] <= maxSum) {
        sum =sum+ b[j];
        j++;
        num++;
    }
    
return num;
    
}
int main(){
    vector<int>a{7,15,12,0,5,18,17,2,10,15,4,2,9,15,13,12,16};
    vector<int>b{12,16,6,8,16,15,18,3,11,0,17,7,6,11,14,13,15,6,18,6,16,12,16,11,16,11};
    int s = 62;
    int m;
    m= twoStacks(s,a,b);
    cout<< m;
}