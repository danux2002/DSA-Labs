#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

double findMedian(vector<int>& nums) {
    int size = nums.size();
    if (size % 2 == 0) {
       
        return (nums[size / 2 - 1] + nums[size / 2]) / 2.0;
    } else {
       
        return nums[size / 2];
    }
}

int main() {
    int n;
    vector<int> nums;
    while(cin>> n)
    {
          nums.push_back(n);
          
        sort(nums.begin(), nums.end());

        
        cout << fixed << setprecision(1) << findMedian(nums) << endl;
    }
    

        
     return 0;
    }

   

