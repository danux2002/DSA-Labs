#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &A,int p,int q,int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    vector<int> left(n1);
    vector<int> right(n2);
    
    for(int i = 0 ;i<n1;i++)
    {
        left[i] = A[p+i];
    }
    for(int j = 0 ;j<n2;j++)
    {
        right[j] = A[q+1+j];
    }
    int i = 0; 
    int j = 0;
    int k = p; 
    while (i < n1 && j < n2) 
    {
        if (left[i] <= right[j]) 
        {
            A[k] = left[i];
            i++;
        } 
        else 
        {
            A[k] = right[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) 
    {
        A[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        A[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(vector<int> &A,int p,int r)
{
    if(p<r)
     {
        int q = (p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge(A,p,q,r);
    }
}


int main()
{
    int n;
    vector<int> numbers;
    while(cin>> n)
    {
          numbers.push_back(n);
    }
    merge_sort(numbers,0,(numbers.size())-1);
    for(int i: numbers)
    {
        cout<< i << " ";
    }
}