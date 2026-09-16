#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int precioMinimo = 100000; // Valor alto inicial
        int gananciaMaxima = 0;

        for (int precio : prices) {
            // Actualizamos el precio mas bajo encontrado hasta hoy
            if (precio < precioMinimo) {
                precioMinimo = precio;
            } 
            // Si vendemos hoy, calculamos si obtenemos mejor ganancia
            else if (precio - precioMinimo > gananciaMaxima) {
                gananciaMaxima = precio - precioMinimo;
            }
        }

        return gananciaMaxima;
    }
};

int main() {
    Solution sol;

    // Casos de prueba de la imagen
    vector<int> precios1 = {7, 1, 5, 3, 6, 4};
    vector<int> precios2 = {7, 6, 4, 3, 1};

    cout << "Caso 1 -> Salida: " << sol.maxProfit(precios1) << " (Esperado: 5)" << endl;
    cout << "Caso 2 -> Salida: " << sol.maxProfit(precios2) << " (Esperado: 0)" << endl;

    return 0;
}