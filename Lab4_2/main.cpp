#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, xp, xk, dx, A, B=0, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;


    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |" << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk) {

        A =  (x*x)*sin((4*x)/3);

        if (x<-5) { B = 1/tan(x); }
        else if (-5<=x && x < 0) { B = 4 - (x*x)/2; }
        else if (x > 0) { B = log10(x*x) - (4*x)/3; }

        y = A + B;
        
         cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    cin.get();
    return 0;
}


