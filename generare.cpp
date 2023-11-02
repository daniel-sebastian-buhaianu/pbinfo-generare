#include <iostream>
using namespace std;
int x, n;
void generare(int, int, int);
int main()
{
    cin >> x;
    n = 0;
    generare(0, 0, 0);
    return 0;
}
void generare(int fn, int fn1, int fn2)
{
    n++;
    fn2 = fn1;
    fn1 = fn;
    if (n <= 3)
    {
        fn = n;
    }
    else if (n % 2 == 0)
    {
        fn = 1 + fn1;
    }
    else
    {
        fn = 1 + 2*fn2;
    }
    if (fn < x)
    {
        generare(fn, fn1, fn2);
    }
    cout << fn << ' ';
}
// scor 100
