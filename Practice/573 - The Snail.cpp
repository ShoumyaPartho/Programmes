#include<iostream>
using namespace std;

int main() {
    int D, F, day = 0;
    float H, U, f, distance = 0.0;

    while (1) {
        cin >> H >> U >> D >> F;
        if (H == 0) break;
        f = U * F / 100;
        day = 0;
        distance = 0.0;

        while (1) {
            day++;

            if (U > 0) {
                distance += U;
                U -= f;
            }

            if (distance > H) break;
            distance -= D;

            if (distance < 0) break;
        }
        if (distance < 0) cout << "failure on day " << day << endl;
        else cout << "success on day " << day << endl;
    }
    return 0;
}
