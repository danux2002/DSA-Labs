#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int partition(vector<int>& arr, int starting, int ending) {
    int pivot = arr[starting];
    int i = starting + 1;

    for (int j = starting + 1; j <= ending; ++j) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }

    swap(arr[starting], arr[i - 1]);
    return i - 1;
}

void quickSort(vector<int>& arr, int starting, int ending) {
    stack<pair<int, int>> stk_st;
    stk_st.push({starting, ending});

    while (!stk_st.empty()) {
        pair<int, int> curr = stk_st.top();
        stk_st.pop();
        int l = curr.first;
        int r = curr.second;

        if (l < r) {
            int p = partition(arr, l, r);
            stk_st.push({l, p - 1});
            stk_st.push({p + 1, r});
        }
    }
}

int main() {
    //int n=15;
    vector<int> arr{65,89,32,24,67,1200};

   
    /*while (cin >> n) {
        arr.push_back(n);
    }
    */
    
    quickSort(arr, 0, arr.size() - 1);

    int size =arr.size();
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
