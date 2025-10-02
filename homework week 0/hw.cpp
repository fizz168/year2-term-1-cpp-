#include<iostream>
using namespace std;
void insertElement(int *arr, int pos, int val, int &n){
    if(pos > n){
        cout<<"error"<<endl;
        return;
    }
for(int i = n; i > pos - 1; i--){
    arr[i] = arr[i - 1];
}
arr[pos] = val;
n++;
}
void deleteElement(int *arr, int pos, int &n){
    if(pos > n){
        cout<<"error"<<endl;
        return;
    }
    for(int i = n; i < pos - 1; i--){
        arr[i] = arr[i + 1];
    }
    n--;
}

int main(){
    int arr[100] = {5, 4, 3, 2, 1};
    int n = 5;
    cout<< "array before modify"<<endl;
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    insertElement(arr, 2, 10, n);
    cout<<"after insert element"<<endl;
    for(int i = 0; i< n; i++){
        cout<<arr[i]<< " ";
    }
    deleteElement(arr, 3, n);
    cout<< "after delete element"<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<< " "; 
    }

    return 0;
}