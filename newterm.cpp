// #include <iostream>
// using namespace std;//using nameaspace std for not to have write std for print something 
// void inputandPrintArray(int a[], int n){

// }
// int main(){
// //  cout<<"sizeof char "<<sizeof (char)<< endl;
// //  cout<<"sizeof int "<<sizeof (int)<< endl;
// int a[10] = {1, 2};
// int n = 2;

// // cout<<a[1]<<endl;
// // cout<<a[0]<<endl;
// for(int i = 0; i < n; i++){
//     cout<<"value"<<i<<":"<<a[i]<<endl;
// }


//     return 0;
// }
#include <iostream>

using namespace std;

void input(int * p_arr, int pos, int val, int &n, int size = 10){
    if(pos >= size || pos > n){
        cout<<"Error!"<<endl;
        return;
    }
    p_arr[pos] = val;
    n = (pos < n)? n: n+1;
}

int main(){

    int a[10] = {1,2};
    int n = 2;

    input(a, 2, 10, n);
    input(a, 3, 15, n);
    input(a, 1, 25, n);
    input(a, 4, 6, n);
    
    
    for(int i = 0; i < n; i++){
        cout<<"Value "<<i<<": "<<a[i]<<endl;
    }
    


    return 0;
}

