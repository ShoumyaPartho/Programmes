#include<iostream>
using namespace std;

template<class T>
void func(const T &x){
    static int count = 0;
    cout<<"x = "<<x<<"\ncount = "<<count++<<endl;
}

int main(){
    func<int> (1);
    func<int> (2);
    func<double> (3.2);
    func<int> (2);
    func<double> (3.2);

    return 0;
}



// // #include "/Users/swassow/Downloads/stdc++.h"
// #include<bits/stdc++.h>
// using namespace std;
// const int n = 10;
// class Matrix
// {
// public:
//     int row, column;
//     int ara[n][n];
//     Matrix(int m, int n)
//     {
//         row = m;
//         column = n;
//         memset(ara, 0, sizeof(ara));
//     }
//     Matrix operator*(Matrix b)
//     {
//         Matrix tmp(row, b.column);
//         if (column != b.row)
//             return tmp;
//         int i, j, k;
//         for (i = 0; i < row; i++)
//         {
//             for (j = 0; j < column; j++)
//             {
//                 for (k = 0; k < column; k++)
//                 {
//                     tmp.ara[i][j] += ara[i][k] * b.ara[k][j];
//                 }
//             }
//         }
//         return tmp;

//     }
//     void show()
//     {
//         for (int i = 0; i < row; i++)
//         {
//             for (int j = 0; j < column; j++)
//             {
//                 cout << ara[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     static void input(Matrix *a, int m, int n)
//     {
//         for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 a->ara[i][j] = rand() % 20;
//             }
//         }
//     }
// };

// int main()
// {
//     int m1, m2, n1, n2;
//     cin >> m1 >> n1 >> m2 >> n2;
//     Matrix a(m1, n1), b(m2, n2), c(m1, n2);
//     Matrix :: input(&a, m1, n1);
//     Matrix :: input(&b, m2, n2);
//     a.show();
//     b.show();
//     c = a * b;
//     c.show();

// }









// #include<bits/stdc++.h>

// using namespace std;

// class Complex_num
// {
//     int x;
//     int y;
// public:
//     Complex_num(int x1 = 0, int y1 = 0)
//     {
//         x = x1;
//         y = y1;
//     }
//     Complex_num operator+(Complex_num &z)
//     {
//         Complex_num temp;
//         temp.x = this->x + z.x;
//         temp.y = this->y + z.y;
//         return y;
//     }
// };
// template<class T>
// class Matrix
// {
//     T** v;
//     int n, m;
// public:
//     Matrix(int m1, int n1)
//     {
//         m = m1;
//         n = n1;
//         v = new T*[m];
//         for (int i = 0; i < m; i++)
//         {
//             v[i] = new T[n];
//         }

//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 v[i][j] = 0;
//             }
//         }

//         // for (int i = 0; i < m; i++) {
//         //     for (int j = 0; j < n; j++) {
//         //         cout << v[i][j] << " ";
//         //     }
//         //     cout << endl;
//         // }

//         // cout << "Success" << endl;
//     }
//     // Matrix(int arr[2][2])
//     // {
//     //     // for (int i = 0; i < m; i++)
//     //     // {
//     //     //     for (int j = 0; j < n; j++)
//     //     //     {
//     //     //         v[i][j] = arr[i][j];
//     //     //     }

//     //     //     cout << endl;
//     //     // }

//     //     // for (int i = 0; i < m; i++) {
//     //     //     for (int j = 0; j < n; j++)
//     //     //         cout << v[i][j] << " ";
//     //     //     cout << endl;
//     //     // }
//     // }

//     void assign(T **ara) {
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 v[i][j] = ara[i][j];
//                 cout << v[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);

//     int **arr;
//     arr = new int*[2];
//     for (int i = 0; i < 2; i++)
//         arr[i] = new int[2];

//     arr[0][0] = 1;
//     arr[0][1] = 2;
//     arr[1][0] = 3;
//     arr[1][1] = 4;
//     Matrix<int> a(2, 2);
//     a.assign(arr);
// }
