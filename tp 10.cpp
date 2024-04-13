#include <iostream>
using namespace std;
int main (){
	
	int codigoArea;
	cout << "Ingrese el codigo de area: "<<endl;
    cin >> codigoArea;

    switch (codigoArea) {
        case 61:
            cout << "Destino: Brasilia" << endl;
            break;
        case 71:
            cout << "Destino: Salvador" << endl;
            break;
        case 11:
            cout << "Destino: Sao Paulo" << endl;
            break;
        case 21:
            cout << "Destino: Rio de Janeiro" << endl;
            break;
        case 32:
            cout << "Destino: Juiz de Fora" << endl;
            break;
        case 19:
            cout << "Destino: Campinas" << endl;
            break;
        case 27:
            cout << "Destino: Vitoria" << endl;
            break;
        case 31:
            cout << "Destino: Belo Horizonte" << endl;
            break;
            default:
            cout << "DDD NO ENCONTRADO" << endl;
            break;
    }

    return 0;
}