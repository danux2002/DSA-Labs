#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> numbers;
    cout << numbers.size()<<endl;
    numbers.push(3);
    numbers.push(5);
    cout<< numbers.front()<< endl;
    cout << numbers.back()<<endl;
}