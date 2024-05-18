#include <iostream>
#include <math.h>
#include <Windows.h>
using namespace std;

template <class T1, class T2, class T3>
long double Average(T1 const& a, T2 const& b, T3 const& c)
{
    long double templ;
    templ = pow(a * b * c, 1./3);
    return templ;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Середнє геометричне значення заданих чисел = " << Average(6, 5.5, 9.515) << endl;
}
