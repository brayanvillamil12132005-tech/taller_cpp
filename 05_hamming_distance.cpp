#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int compute(string strand1, string strand2) {
        // Validar que ambas cadenas tengan la misma longitud
        if (strand1.length() != strand2.length()) {
            cout << "Error: Las secuencias deben tener la misma longitud." << endl;
            return -1;
        }

        int distancia = 0;
        for (size_t i = 0; i < strand1.length(); i++) {
            if (strand1[i] != strand2[i]) {
                distancia++;
            }
        }

        return distancia;
    }
};

int main() {
    Solution sol;

    // Caso de prueba del ejemplo en la imagen
    string adn1 = "GAGCCTACTAACGGGAT";
    string adn2 = "CATCGTAATGACGGCCT";

    int resultado = sol.compute(adn1, adn2);

    cout << "Cadena 1: " << adn1 << endl;
    cout << "Cadena 2: " << adn2 << endl;
    cout << "Distancia de Hamming -> Salida: " << resultado << " (Esperado: 7)" << endl;

    return 0;
} 