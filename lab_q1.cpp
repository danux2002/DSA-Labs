#include<iostream>
#include<vector>
#include<string>
using namespace std;
int superDigit(string n,int k){
    if (k==1){    
        return stoi(n);
    }
    else{
        int sum=0;
        for(int i=0;i<k;i++){
            sum += n[i]-'0';
        }

        int j = superDigit(to_string(sum),(to_string(sum)).length());
        return j;
    }
}
int main(){
    cout<<superDigit("12345",5);
}