#include<bits/stdc++.h>
using namespace std;
int binarySearchString(string arr[], string x, int n) {
   int lower = 0;
   int upper = n - 1;
   while (lower <= upper) {
      int mid = lower + (upper - lower) / 2;
      int res;
      if (x == (arr[mid]))
         res = 0;
      if (res == 0)
         return mid;
      if (x > (arr[mid]))
         lower = mid + 1;
      else
         upper = mid - 1;
   }
   return -1;
}
int main () {
   int n = 4;
   string arr[n];
   cout << "enter the names : ";
   for(int i = 0; i < 4 ; i++) cin >> arr[i];
   string x ;
   cout << "Enter the name : "; cin >> x;
   
   int result = binarySearchString(arr, x, n);
   if(result == -1)
      cout<<("Element not present");
   else
      cout<<("Element found at index ") << result;
}