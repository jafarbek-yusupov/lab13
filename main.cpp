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

int main(){
    problem2();
    return 0;
}
