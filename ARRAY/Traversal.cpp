#include<bits/stdc++.h>
using namespace std;
void display(int a[] , int num){
    for(int i = 0 ; i < num ; i++){
        cout << a[i] << " " ;
    }
}
void max( int a[] , int num) {
    int temp = a[0];
    for(int i = 1 ; i < num ; i++) {
        if(temp < a[i]) temp = a[i]; 
    }
    cout << "\nMaximum value of this array is : " << temp <<endl;

}


void min( int a[] , int num) {
    int temp = a[0];
    for(int i = 1 ; i < num ; i++) {
        if(temp > a[i]) temp = a[i]; 
    }
    cout << "\nManimum value of this array is : " << temp <<endl;

}
void sin_value(int a[] , int n)
{
    cout << "Sin value is : ";
    for(int i = 0 ; i < n ; i++) {
        cout << sin(a[i]) << " ";
    }
    cout << endl;
}
 void total_value(int a[] , int num) {
    int sum = 0 ;
    for(int i = 0 ; i < num ; i++) {
        sum+= a[i];

    }
    printf("\nTotal Value of this Array  is : %d\n " , sum);
    printf("The Average Value is % d\n " , (double)sum / num);
 }
int main(void) {

    int n ; 
    cout << "Enter the Size of Array : " ;
    cin >> n;
    int array[n] ;
    cout << "Enter the element of this array : ";
    for(int i = 0 ; i < n ; i++) cin >> array[i];
    cout << "Traversal of array in print" << endl;;
    display(array,n);

    max(array,n);

    min(array , n);

    sin_value(array , n);

    total_value(array,n);
    return 0;
}