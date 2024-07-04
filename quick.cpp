
#include <iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
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

void quickSort(vector<int>&arr, int starting, int ending)
{

	
	if (starting >= ending)
		return;

	
	int p = partition(arr, starting, ending);

	
	quickSort(arr, starting, p - 1);

	
	quickSort(arr, p + 1, ending);
}

int main()
{
    //int n=20;
    vector<int> arr{65,89,32,24,67,1200,653};
    /*while(cin>> n)
    {
          arr.push_back(n);
    }*/
	

	quickSort(arr, 0, (arr.size())-1);

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
