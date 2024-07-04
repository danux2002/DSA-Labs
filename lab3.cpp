#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count=count+1;
	}

	
	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}
        
		if (i < pivotIndex && j > pivotIndex) {
			
            swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quick_Sorting(vector<int>&arr, int starting, int ending)
{

	
	if (starting >= ending)
		return;

	
	int p = partition(arr, starting, ending);

	
	quick_Sorting(arr, starting, p - 1);

	
	quick_Sorting(arr, p + 1, ending);
}
double findMedian(vector<int>& nums) {
    int size = nums.size();
    quick_Sorting(nums, 0, (nums.size())-1);
    if (size % 2 == 0) {
       
        return (nums[size / 2 - 1] + nums[size / 2]) / 2.0;
    } else {
       
        return nums[size / 2];
    }
}


int main()
{
    int n;
    vector<int> arr;
    while(cin>> n)
    {
          arr.push_back(n);
          cout << fixed << setprecision(1) << findMedian(arr) << endl;
    }
	
	return 0;
}
