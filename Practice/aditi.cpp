// #include <bits/stdc++.h>

// using namespace std;

// // void fastIO() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0), cout.tie(0);

// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// // #endif
// // }

// // Function to integrate
// double f1(double x, double c) {
//     double result = 79.82 * x * exp(-c * x);
//     return result;
// }

// double f2(double x, double c) {
//     double result = 8301.6 - (4.989 * x - 518.85) * (c * exp(-c * x));
//     return result;
// }


// // Trapezoidal rule for numerical integration
// double integrate1(double a, double b, int n, double c) {
//     double h = (b - a) / n;
//     double sum = 0.5 * (f1(a, c) + f1(b, c));

//     for (int i = 1; i < n; ++i) {
//         double x = a + i * h;
//         sum += f1(x, c);
//     }

//     return sum * h;
// }

// // Trapezoidal rule for numerical integration
// double integrate2(double a, double b, int n, double c) {
//     double h = (b - a) / n;
//     double sum = 0.5 * (f2(a, c) + f2(b, c));

//     for (int i = 1; i < n; ++i) {
//         double x = a + i * h;
//         sum += f2(x, c);
//     }

//     return sum * h;
// }


// int main() {
//     // fastIO();

//     // Lower limit
//     double a = 0.0;

//     // Upper limit
//     double b = 104, inf = 2400000.0;

//     // Number of intervals
//     int n = 100000;

//     // Constant c
//     double c = 0.01, A = 10; // A er value bowao

//     // Perform numerical integration
//     double result = 0.01 * integrate1(a, b, n, c);
//     result = result + integrate2(a, b, n, c) - 3123.1;

//     // Output the result
//     cout << "Result: " << result << endl;

//     return 0;
// }










#include <bits/stdc++.h>

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

// Function to integrate
double f(double x, double c) {
    double result = (103.77 - 0.9978 * x) * c * exp(-c * x);
    return result;
}

// Trapezoidal rule for numerical integration
double integrate(double a, double b, int n, double c) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a, c) + f(b, c));

    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        sum += f(x, c);
    }

    return sum * h;
}

int main() {
    fastIO();

    // Lower limit
    double a = 0.0;

    // Upper limit
    double b = -0.24;

    // Number of intervals
    int n = 10000;

    // Constant c
    double c = 0.01, A = 10; // A er value bowao

    // Perform numerical integration
    double result = 3631.95 - 16.25 * integrate(a, b, n, c) - 20;

    // Output the result
    cout << "Result: " << result << endl;

    return 0;
}












// #include <bits/stdc++.h>

// using namespace std;

// // void fastIO() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(0), cout.tie(0);

// // #ifndef ONLINE_JUDGE
// //     freopen("input.txt", "r", stdin);
// //     freopen("output.txt", "w", stdout);
// // #endif
// // }

// // Function to integrate
// double f1(double x, double c) {
//     return x * exp(-c * x);
// }

// double f2(double x, double c) {
//     return ((20.06 - x * (-84.09)) * exp(-c * x));
// }

// double f3(double x, double c) {
//     return ((1604.8 + 420.5 * x - 20.06) * exp(-c * x));
// }

// // Trapezoidal rule for numerical integration
// double integrate1(double a, double b, int n, double c) {
//     double h = (b - a) / n;
//     double sum = 0.5 * (f1(a, c) + f1(b, c));

//     for (int i = 1; i < n; ++i) {
//         double x = a + i * h;
//         sum += f1(x, c);
//     }

//     return sum * h;
// }

// double integrate2(double a, double b, int n, double c) {
//     double h = (b - a) / n;
//     double sum = 0.5 * (f2(a, c) + f2(b, c));

//     for (int i = 1; i < n; ++i) {
//         double x = a + i * h;
//         sum += f2(x, c);
//     }

//     return sum * h;
// }

// double integrate3(double a, double b, int n, double c) {
//     double h = (b - a) / n;
//     double sum = 0.5 * (f3(a, c) + f3(b, c));

//     for (int i = 1; i < n; ++i) {
//         double x = a + i * h;
//         sum += f3(x, c);
//     }

//     return sum * h;
// }

// int main() {
//     // fastIO();

//     // Lower limit
//     double a = 0.0;

//     // Upper limit
//     double b = -0.24, inf = 2400000.0;

//     // Number of intervals
//     int n = 10000;

//     // Constant c
//     double c = 0.01, A = 10; // A er value bowao

//     // Perform numerical integration
//     double result = -67.264 * integrate1(a, b, n, c);
//     result = result + 0.1625 * integrate2(a, b, n, c);
//     result = result + 0.01 * integrate3(b, inf, n, c);
//     // result = result - A; // Side thaki // eta kato

//     // Output the result
//     cout << "Result: " << result << endl;

//     return 0;
// }
