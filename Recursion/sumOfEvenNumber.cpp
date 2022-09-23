#include <bits/stdc++.h>
using namespace std;
void sumOfEven(int a[], int number, int sum)
{
    if (number > 0)
    {
        if (a[number] % 2 == 0)
        {
            sum += a[number];
            sumOfEven(a,number = number - 1, sum);
        }
    }
    else
    {
        cout << "Sum = " << sum << endl;
        return;
    }
}
int main()
{
    int n, sum = 0;
    cout << "Enter the size of array :" << endl;
    cin >> n;
    int array[n];
    cout << "Enter the element : ";
    for (int i = 0; i < n; i++)
        cin >> array[i];
    sumOfEven(array, n - 1, sum);
    return 0;
}