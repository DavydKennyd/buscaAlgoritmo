#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> lista = {2, 3, 5, 6, 8, 9, 10, 12};
    int numero;
    cout<<"Digite um numero para procurar na lista e mostrar a posiçao do numero pedido: "<<endl;
    cin>>numero;

    int esquerda = 0;
    int direita = lista.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (lista[meio] == numero) {
            cout << "Numero foi encontrado na posiçao: " << meio << endl;
            return 0;
        } else if (lista[meio] > numero) {
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }
    cout << "Elemento não encontrado no array." << endl;
    return 0;
}
