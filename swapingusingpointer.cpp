//Swaping two numbers using pointers
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    int *p, *q;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p = &a;
    q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
