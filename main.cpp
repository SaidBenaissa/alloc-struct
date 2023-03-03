#include <iostream>
using namespace std;

struct A{
    int a1;
    int a2;
};

int main(){
//  Dynamic allocation of struct A
    cout << "Dynamic allocation of struct A" << endl;
    A *objA = (A*)malloc(sizeof(A));
    objA->a1 = 1;
    (*objA).a2 = 2;

    cout << "objA->a1 = " << objA->a1 << endl;
    cout << "(*objA).a2 = " << (*objA).a2 << endl;

    return 0;
}