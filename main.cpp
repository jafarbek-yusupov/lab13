#include <iostream>
#include <vector>
#define fl(i, a, b) for(int i = a; i<b; ++i)
#define fli(i, a, b) for(int i = a; i<=b; ++i)
#define f(i, a) fl(i, 0,a)
#define fi(i, a) fli(i,0,a)
#define all(s) s.begin(), s.end()
using namespace std;

void problem2(){
    int* ptr;
    int a[10] = {1,2,3,4,5,6,7,8,9};
    ptr = a;
    f(i,9){    cout << *ptr++ << endl;}
}

// int findLargestElement(const int* arr, int size)
int findLargestElement(const int* arr, int size) {
    int mx = *arr;
    for (int i = 0; i < size; i++){ mx=max(*arr++,mx);  }
    return mx;
}

void problem3() {
    int n;  cin >> n;   int a[n];
    f(i,n){ cin >> *(a+i);}
    cout << findLargestElement(&a[0], n) << endl;
}

void problem4() {
    const int n = 10;
    float *ptr, a[n];
    f(i,n){ cin >> *(a+i);}
}

void sumArrays(const double* arr1,const double* arr2, double* sum,int size){
    for(int i=0;i<size;i++){    *(sum+i)= *(arr1 +i) + *(arr2+i);}
    for(int i=0;i<size;i++){    cout << *(sum+i) << " ";}    cout << endl;
}

// problem 8
void swap(int* arr1,int* arr2,int size) {
    for(int i=0;i<size;i++) {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    for(int i=0;i<size;i++){    cout << arr1[i] << " ";}    cout << endl;
    for(int i=0;i<size;i++){    cout << arr2[i] << " ";}    cout << endl;
}

// problem 9
bool is_in(const int* arr1,const int* arr2, int size1,int size2){
    for(const int *p1=arr1;p1<size1+arr1;p1++){
        bool fnd=false;
        for(const int *p2=arr2; p2<size2+arr2;p2++) {
            if(*p1 == *p2){ fnd=true; break; }
        }
        if(!fnd){ return false; }
    }
    return true;
}

// problem 10
void sortArray(int* arr, int size) {
    for(int* i=arr;i<arr+size-1;i++){
        for(int* j=arr;j<arr+size-(i-arr)-1;j++){
            if(*j > *(j+1)) {
                int tmp=*j;
                *j= *(j+1);
                *(j+1)= tmp;
            }
        }
    }
}

int main(){
    // FOR PR7
    // double arr1[5] = {1.1, 2.2, 3.3, 4.4, 5};
    // double arr2[5] = {5.5, 4.4, 3.3, 2.2, 1.1};
    // double sum[5];
    // sumArrays(arr1, arr2, sum, 5);
    
    // FOR PR8
    // int arr1[5] = {0,1,2,3,4};
    // int arr2[5] = {5,6,7,8,9};
    // swap(arr1,arr2,5);

    // FOR PR9
    // int n,n1;  cin >> n;
    // int a[n];   for(int i=0;i<n;i++) cin >> *(a+i);
    // cin >> n1;  int a1[n1];
    // for(int i=0;i<n1;i++){  cin >> *(a1+i);}
    // cout << is_in(a,a1,n,n1) << endl;

    // FOR PR10
    // int arr[5] = {64, 25, 12, 22, 11};
    // sortArray(arr, 5);
    // cout << "Sorted array: ";
    // for (int* p = arr; p < arr + 5; ++p) {
    //     cout << *p << " ";
    // }
    // cout << endl;
    return 0;
}
