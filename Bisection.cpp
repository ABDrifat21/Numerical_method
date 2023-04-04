#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return x * x - 2;
}

double bisection(double a, double b, double eps) {
    double c = (a + b) / 2;
    double fc = f(c);
    while (abs(b - a) > eps) {
        if (fc == 0.0) {
            return c;
        } else if (f(a) * fc < 0.0) {
            b = c;
        } else {
            a = c;
        }
        c = (a + b) / 2;
        fc = f(c);
    }
    return c;
}

int main() {
    double a = 1.0;
    double b = 2.0;
    double eps = 0.0001;
    double root = bisection(a, b, eps);
    cout << "Root is approximately " << root << endl;
    return 0;
}
