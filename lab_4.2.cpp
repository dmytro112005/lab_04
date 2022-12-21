#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    double x, xp, xk, dx, A, B, y;
    cout << "xp = ";  cin >> xp; 
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |" << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = x*x*x + 2;
        if (x<4)
            B = 5*x*x*x*x*x*x*x*x + x*x*x*x*x*x + 3;
        else
            if (x>=7)
                B = log10(2*x + exp(5*x + 5));
            else
                B = atan(abs((x + 3)/(2)) + 7*x);
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x  << " |" << setw(10) << setprecision(3) << y << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
