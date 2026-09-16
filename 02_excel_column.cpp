#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int resultado = 0;
        for (char c : columnTitle) {
            int valorChar = c - 'A' + 1; // Convierte 'A'->1, 'B'->2, etc.
            resultado = resultado * 26 + valorChar; // Base 26
        }
        return resultado;
    }
};

int main() {
    Solution sol;
    
    // Casos de prueba del enunciado
    string col1 = "A";
    string col2 = "AB";
    string col3 = "ZY";

    cout << "Entrada: " << col1 << " -> Salida: " << sol.titleToNumber(col1) << " (Esperado: 1)" << endl;
    cout << "Entrada: " << col2 << " -> Salida: " << sol.titleToNumber(col2) << " (Esperado: 28)" << endl;
    cout << "Entrada: " << col3 << " -> Salida: " << sol.titleToNumber(col3) << " (Esperado: 701)" << endl;

    return 0;
}