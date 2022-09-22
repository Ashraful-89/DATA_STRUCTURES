#include <bits/stdc++.h>
using namespace std;

void DisplayArray(int A[], int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int start, int end)
{

    int count = 0;
    int pivot = array[start];
    // for(int i = start + 1 ; i <= end ; i++) {
    //     if(array[i] < pivot ) {
    //         count++;
    //     }
    // }

    int i = start + 1;
    int j = end;

    do
    {
        while (array[i] <= pivot)
        {
            i++;
        }

        while (array[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(array[i], array[j]);
        }
    } while (i < j);

    swap(array[start] , array[j]);
    return j;
}

void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);

        // recursive call on the left of pivot
        QuickSort(a, 0, pi - 1);

        // recursive call on the Right of pivot

        QuickSort(a, pi + 1, high);
    }
}
int main(void)
{
    int n;
    cout << "Enter the size of Array : ";
    cin >> n;
    int A[n];
    cout << "Enter The Element of Array : ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    cout << "Unsorted Array :\n";
    DisplayArray(A, n);

    QuickSort(A, 0, n - 1);
    cout << "\nSorted Array Using Quick Sort : \n";
    DisplayArray(A, n);
    return 0;
}