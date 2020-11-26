#include <iostream>

using namespace std;

int main() {


    typedef int MATRIK333 [3][3][3];

    MATRIK333 A, B, C, D;

    int j,k,l;

    for ( j=0; j<3; j++){
        for(k=0;k<3;k++){
            for(l=0;l<3;l++){
                cout << "A[" << j <<"] ["<< k << "] [" << l << "] = ";
                cin >> A[j][k][l];
            }
        }
    }

    cout << endl;

    for (j = 0; j < 3; j++)
    {
        for (k = 0; k < 3; k++)
        {
            for (l = 0; l < 3; l++)
            {
                cout << "B[" << j << "] [" << k << "] [" << l << "] = ";
                cin >> B[j][k][l];
            }
        }
    }

    cout << endl;

    for (j = 0; j < 3; j++)
    {
        for (k = 0; k < 3; k++)
        {
            for (l = 0; l < 3; l++)
            {
                cout << "C[" << j << "] [" << k << "] [" << l << "] = ";
                cin >> C[j][k][l];
            }
        }
    }

    cout << endl;

// melakukan penjumlahan matriks A + B + C = D

for ( j=0;j<3;j++){
    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
            D[j][k][l] = A[j][k][l] + B[j][k][l] + C[j][k][l];
        }
    }
}

// menampilkan hasil penjumlahan

for ( j=0;j<3;j++){
    for(k=0;k<3;k++){
        for(l=0;l<3;l++){
            cout << "D[" << j << "] [" << k << "] [" << l << "] = "
            << D[j][k][l] << endl;
        }
    }
}
    return 0;
    cin.get();
}