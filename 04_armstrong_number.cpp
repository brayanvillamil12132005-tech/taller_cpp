#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        string numStr = to_string(n);
        int numDigitos = numStr.length();
        int suma = 0;
        int temp = n;

        while (temp > 0) {
            int digito = temp % 10;
            suma += pow(digito, numDigitos);
            temp /= 10;
        }

        return suma == n;
    }
};

int main() {
    Solution sol;

    // Casos de prueba del enunciado
    int test1 = 9;
    int test2 = 10;
    int test3 = 153;
    int test4 = 154;

    cout << test1 << " -> " << (sol.isArmstrong(test1) ? "Es Armstrong" : "NO es Armstrong") << " (Esperado: Es Armstrong)" << endl;
    cout << test2 << " -> " << (sol.isArmstrong(test2) ? "Es Armstrong" : "NO es Armstrong") << " (Esperado: NO es Armstrong)" << endl;
    cout << test3 << " -> " << (sol.isArmstrong(test3) ? "Es Armstrong" : "NO es Armstrong") << " (Esperado: Es Armstrong)" << endl;
    cout << test4 << " -> " << (sol.isArmstrong(test4) ? "Es Armstrong" : "NO es Armstrong") << " (Esperado: NO es Armstrong)" << endl;

    return 0;
}