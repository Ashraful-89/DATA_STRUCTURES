#include<bits/stdc++.h>
using namespace std;
int main() {
    int groupNumber;
    cout << "Enter the number of Group : "; cin >> groupNumber;
    int maximumNumber;
    cout << "Enter the maximum number of each group : "; cin >> maximumNumber;

    int array[groupNumber][maximumNumber];
    int result[100];
    int group[groupNumber];
    int k = 0, cnt = 0;
    group[0] = 0;
    cout<< "Enter the number : \n";
    for(int i = 0; i < groupNumber; i++) {
        for(int j = 0; j < maximumNumber; j++) {
            cin >> array[i][j];
            if(array[i][j] != 0) {
                result[k++] = array[i][j];
                cnt++;
            }
        }
        group[i+1] = cnt; 

    }
    cout << "The Result of the array : ";
    for(int i = 0 ; i < k; i++) {
        cout << result[i] << " ";
    }
    cout <<endl << "The group value : " ;
    for(int i = 0; i < groupNumber; i++){
        cout << group[i] << " ";
    }


   
    int x;
    cout << "\nEnter the number of the group u want see: "; cin >> x;
    int first = group[x - 1];
    int last = group[x] - 1;
    for(int i = first; i <= last ; i++) {
        cout << result[i] << " ";
    }

    return 0;
}