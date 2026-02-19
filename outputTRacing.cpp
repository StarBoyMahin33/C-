
#include <iostream>

using namespace std;

int main()

{

    double a=5.6;

    int b=a; int c=b++;

    double d=--a; char ch = 'A';

    cout << (int)a+a << endl;

    cout << b << endl;

    cout << c << endl;

    cout << ++c << endl;

    cout << d++ << endl;

    cout << d << endl;

    cout << (double)c+d << endl;

    cout << (a!=d) << endl;

    cout << ch++ << endl;

    cout << ++ch << endl;

    cout << --ch << endl;

    cout << ch << endl;

    cout << (b==6 ? "Yes" : "No") << endl;

    return 0;

}
