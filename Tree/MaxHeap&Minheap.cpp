// #include<bits/stdc++.h>
// using namespace std;
// int heap[100];
// int size = 0;

// void insert(int data) {
//     size = size + 1;
//     heap[size] = data;
//     int index = size;
//     while(index > 1) {
//         int parent = index / 2;
//         if(heap[parent] < heap[index]) {
//             swap(heap[parent],heap[index]);
//             index = parent;
//         }
//         else {
//             break;
//         }

//     }
// }

// void Print() {
//     for(int i = 1; i < size + 1; i++) {
//         cout << heap[i] << " ";
//     }
// }

// int main() {
//     int number ;
//     heap[0] = - 1;
//     cout << "Enter the element of heap to want insert : "; cin >> number;
//     for(int i = 0; i < number ; i++) {
//         int x;
//         cin >> x;
//         insert(x);
//     }
//     Print();
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int heap[100];
int size = 0;


// Max Heap

void insertMaxHeap(int data) {
    size = size + 1;
    heap[size] = data;
    int index = size;
    while(index > 1) {
        int parent = index / 2;
        if(heap[parent] < heap[index]) {
            swap(heap[parent],heap[index]);
            index = parent;
        }
        else {
            break;
        }
    }

}

// Min heap 
void insertMinHeap(int data ) {
    size = size + 1;
    heap[size] = data;
    int index = size;
    while(index > 1) {
        int parent = index / 2;

        if(heap[parent] > heap[index]) {
            swap(heap[parent] , heap[index]);
            index = parent;
        }
        else {
            break;
        }
    }
}

void deleted_root() {
    heap[1] = heap[size];
    size = size - 1;
    int i = 1;

    while(i < size) {
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;
        if(i < size && heap[leftIndex] > heap[i]) {
            swap(heap[leftIndex] , heap[i]);
            i = leftIndex;
        }
        else if(i < size && heap[rightIndex] > heap[i]) {
            swap(heap[rightIndex] , heap[i]);
            i = rightIndex;
        }
        else {
            return;
        }
    }
}

void Print_as_tree(int i , int space) {
    if(heap[i] == 0) return;

    space += 10;
    Print_as_tree(i*2 + 1 , space);
    cout << endl;
    for(int i = 10 ; i < space; i++) cout << " ";
    cout << heap[i] << endl << endl;
    Print_as_tree(2*i,space);

}
int main() {
    heap[0] = - 1;
    int number;
    cout << "Enter the Number of Element : "; cin >> number;
    int array[number];
    cout << "Enter the element : ";
    for(int i = 0; i <number; i++) {
        cin >> array[i];
        insertMinHeap(array[i]);
        cout << endl << endl;
        Print_as_tree(1,0);
        cout << endl << endl;

    }
    cout << "\nThe Element of Heap : ";
    for(int i = 1 ; i < size + 1; i++) {
        cout << heap[i] << " ";
    }
    deleted_root();
    cout << "\n\nAfter the deletion of the root value : \n";
        Print_as_tree(1,0);

    
    return 0;

}














