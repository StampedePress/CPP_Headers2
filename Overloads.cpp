#include <iostream>
#include "Functions.h"
using namespace std;

int main()
{
    auto a = add(3,4);
    cout << "3 + 4 = " << a << endl;    

    double b = add(1.2, 3.4, 5.6);
    cout << "1.2 + 3.4 + 5.6 = " << b << endl;

    add(4.3);

    return 0;
}
