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
    f(i,n){ cin >> a[i];}
    cout << findLargestElement(&a[0], n) << endl;
}

void problem4() {
    const int n = 10;
    float *ptr, a[n];
    f(i,n){ cin >> a[i];}

}

int main(){
    problem3();
    return 0;
}
