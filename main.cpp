#include<bits/stdc++.h>
using namespace std;

int main(){
    int lungime, x, n;
    cin >> n; // nr de siruri crctr
    string sir;
    string rezultat[n] = {""};  // vct de siruri pentru a stoca caracterele

    for (int l = 0; l < n; l++) {
        cin >> sir;

        lungime = sir.length();
        int putere = 1;

                                                // determin dim. minima a matricei pt sirul meu
        while (putere * putere < lungime) {
            putere++;
        }

        char matrice[putere][putere]; 

        x = 0;
                                                // completez matricea cu caractere din sirul curent
        for (int i = 0; i < putere; i++) {
            for (int j = 0; j < putere; j++) {
                if (x < lungime) {
                    matrice[i][j] = sir[x];
                } else {
                    matrice[i][j] = '*'; 
                }
                x++;
            }
        }

        // matricea se roteste la 90*
        for (int i = 0; i < putere; i++) {
            for (int j = 0; j < putere; j++) {
                if (matrice[putere - j - 1][i] != '*') {
                    rezultat[l] += matrice[putere - j - 1][i];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << rezultat[i] << "\n";
    }

    return 0;
}
