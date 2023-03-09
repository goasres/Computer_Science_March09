#include <bits/stdc++.h>
using namespace std;
int partition(int A[], int lo, int hi)
{  
    // here p is the pivot 
    int p, temp,i;    
    p = A[hi];
    i = lo - 1;
    for (int j = lo; j < hi ; j++)
        {
            if (A[j] < p)
            {
                i = i + 1;
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }    
        }    
    if (A[hi] < A[i + 1])
        {
            temp = A[i+1];
            A[i + 1] = A[hi];
            A[hi] = temp;
        }
    return i + 1;   
    
}
 
void quickSort(int arr[], int lo, int hi)
{
    int p;
    if (lo < hi)
        {
            p = partition(arr, lo, hi);
            quickSort(arr, lo, p - 1);
            quickSort(arr, p + 1, hi);
        }
}


int main(void)
{   
    int n;
    ofstream my_out("QuickSort.out");  
    cout<<"Enter the no. of elements : \n";
    my_out << "Enter the no. of elements : " << endl;
    
    cin >> n;
    my_out << n << endl;
     
    int arr[n];
    
    cout << "Enter the Elements : ";
    my_out << "Enter the Elements : " << endl;
    for(int arr_i = 0; arr_i < n; arr_i++ )
    {
        cin >> arr[arr_i]; 
        my_out << arr[arr_i] << endl;  
    }
    
    quickSort(arr, 0, n-1);
    
    cout << "Sorted array is : \n";
    my_out << "Sorted array is : " << endl;
    
    for(int arr_i = 0; arr_i < n; arr_i++ )
    {
        cout << arr[arr_i]<< "\t" << endl;
        my_out << arr[arr_i] << "\t" << endl;   
    }
    return 0;
}