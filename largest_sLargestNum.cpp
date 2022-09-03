#include <bits/stdc++.h>
#include<stdio.h>

using namespace std;
int main()
{

  int n;
  cout << "Enter The Element of tha Array:" << endl;
  cin >> n;
  int array[n];

  // take the element of array using keyboard
  cout << "\nEnter the element of this array :";
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  int largest = array[0] , slargest = array[1] , location1 = 0 , location2 = 1;
  if( largest < slargest ){
    int temp = slargest;
    slargest = largest;
    largest = temp;
    temp = location1;
    location1 = location2;
    location2 = temp;
  }
  for(int i = 2 ; i < n ; i++){
    if(largest < array[i]){
      int temp = largest;
      largest = array[i];
      slargest = temp;

      temp = location1;
      location1 = i;
      location2 = temp;
    }
    else if( slargest < array[i]){
      slargest = array[i];
      location2 = i;
      
    }
  }
  printf("The largest value of this array is = %d and the location of this value is = % d \n ", largest , location1+1);
  printf("The second largest value of this array is = %d and the location of this value is = % d \n ", slargest , location2 + 1);
  

   return 0;
}
