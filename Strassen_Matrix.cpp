#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter matrix size: ";
    cin >> n;

    int A[n][n], B[n][n], C[n][n];

    cout << "Enter Matrix A:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter Matrix B:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    // 2 x 2 matrix
    int a = A[0][0], b = A[0][1];
    int c = A[1][0], d = A[1][1];

    int e = B[0][0], f = B[0][1];
    int g = B[1][0], h = B[1][1];

    // 7 Strassen formulas
    int M1 = (a + d) * (e + h);
    int M2 = (c + d) * e;
    int M3 = a * (f - h);
    int M4 = d * (g - e);
    int M5 = (a + b) * h;
    int M6 = (c - a) * (e + f);
    int M7 = (b - d) * (g + h);

    C[0][0] = M1 + M4 - M5 + M7;
    C[0][1] = M3 + M5;
    C[1][0] = M2 + M4;
    C[1][1] = M1 - M2 + M3 + M6;

    cout << "Result:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
