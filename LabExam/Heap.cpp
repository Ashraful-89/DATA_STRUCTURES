#include<bits/stdc++.h>
using namespace std;
int n = 0;

int heap[100];
void insert(int value){
    n = n + 1;
    int index = n;
    heap[index] = value;
    
    while(index > 1) {
        int parent = index / 2;
        if(heap[parent] < heap[index]) {
            swap(heap[parent],heap[index]);
            index = parent;
        }
        else {
            return;
        } 
    }
}

void heapify (int heap[] , int n , int i) {
    int largest = i;
    int left = 2 * i ;
    int right = 2*i + 1;
    if(left < n && heap[largest] < heap[left])
    largest = left;
    if(right < n && heap[largest] < heap[right]) {
        largest = right;
    }
    if(largest != i) {
        swap(heap[largest],heap[i]);
        heapify(heap,n,largest);
    }
    else {
        return;
    }
}
void Print() {
    for(int i = 1; i < n + 1 ; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

}
void print_as_tree(int i , int space) {
    int increase = 10;                     
    if(heap[i]==0) {
        return;
    }

    space = space + increase;
    print_as_tree(i*2+1,space);
    for(int j = increase ; j < space ; j++) {
        cout << " " ;
    }
    cout <<heap[i] << endl;
    print_as_tree(i*2 , space);
}

 int deleted() {
    int i = 1;
    int par = heap[1], left = heap[2], right = heap[3];
    int root = heap[1], last = heap[n];
    heap[n] = 0;
    while(last < left || last < right) {
        if(left > right) {
            if(left > last) {
                heap[i] = left;
                i = i * 2;
            }
        }
        else {
            if(right > last) {
                heap[i] = right;
                i = i * 2 + 1;
            }
        }
        left = heap[i*2]; right = heap[i*2+1];
    }
    heap[i] = last;
    n = n - 1;
    return root;
}

int main() {
    heap[0] = -1;
    for(int i = 0 ; i < 5 ; i++) {
     int number;
     cout << "Enter the Number : ";
     cin >> number;
     insert(number);
     Print();
    }
    cout << "\n The heap is represented is tree :\n";
    print_as_tree(1,0);

    cout << "After delation in root node : \n";
    int deleted_value = deleted();
    print_as_tree(1,0);
   

    // int size = 10;
    // int heap[size] = {-1, 76, 89, 9, 34, 56, 78};

    // for(int i = size / 2 ; i > 0 ; i--) {
    //     heapify(heap,size,i);
    // }

    return 0;
}