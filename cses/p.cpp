#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    vector<long long int> v(n + 1); // tamaño inicial para evitar expansiones
    unordered_map<long long int, int> m; // O(1) promedio para búsquedas
    int acum = 0;

    // Inicialización del vector y el mapa
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        m[v[i]] = i;
        if (!m.count(v[i] - 1)) { // cuenta la ausencia del número anterior
            acum++;
        }
    }

    // Operaciones de intercambio
    while (h--) {
        int i, j;
        cin >> i >> j;

        // Intercambio de índices en el mapa
        swap(m[v[i]], m[v[j]]);
        
        // Intercambio de valores en el vector
        swap(v[i], v[j]);

        // Ajustes para `acum`
        if (m[v[i] - 1] > m[v[i]]) {
            acum++;
        }
        if (m[v[j] - 1] > m[v[j]]) {
            acum++;
        }
        
        cout << acum << endl;
    }

    return 0;
}
