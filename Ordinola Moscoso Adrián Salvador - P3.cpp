//https://github.com/ADRIAN-SALVADOR-ORDINOLA-MOSCOSO-323/2da-Prac.Calificada-23200323

//Práctica Calificada 2 - Fila D
/*
//Ejercicio 3:
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct Factura {
    string nom;
    int est;
    int num_u;
    float precio;
    float total;
} f[20];

int main() {
    float total;
    int i = 0, opc, cantidad, c;

    cout << "Programa de facturación de clientes que debe generar el nombre del cliente, el numero de unidades solicitadas, el precio de cada unidad y el estado en que se encuentra\n\n";

    do {
        cout << "¿Desea facturar a un cliente? \n 1. SI \n 0. NO \n";
        cin >> opc;
    } while(opc < 0 || opc > 1);

    do {
        system("cls");
        if(opc == 1) {
            i++;
            cantidad=i;

            cout << "Nombre del cliente: ";
            cin.ignore();
            getline(cin, f[i].nom);

            cout << "Numero de unidades adquiridas: ";
            cin >> f[i].num_u;

            cout << "Precio del producto: ";
            cin >> f[i].precio;

            do {
                cout << "Estado: \n 1) Moroso \n 2) Atrasado \n 3) Pagado \n";
                cin >> f[i].est;
            } while(f[i].est < 1 || f[i].est > 3);

            f[i].total = f[i].num_u * f[i].precio;

            system("cls");

            cout << "\tFACTURA\n\n";
            cout << "Nombre del cliente: " << f[i].nom << "\n";
            cout << "Numero de unidades solicitadas: " << f[i].num_u << "\n";
            cout << "Precio por unidad: " << f[i].precio << "\n";
            cout << "Total: " << f[i].total << "\n";

            switch(f[i].est) {
                case 1: 
                    cout << "Estado: Moroso\n\n\n";
                    break;
                case 2: 
                    cout << "Estado: Atrasado\n\n\n";
                    break;
                case 3: 
                    cout << "Estado: Pagado\n\n\n";
                    break;
            }

            cout << "¿Desea facturar a otro cliente? \n";
            cout << "1. SI \n 0. NO \n";
            cin >> opc;
        }
    } while(opc == 1);

    system("cls");

    cout << "Clientes en estado moroso\n\n";
    for(i = 1; i <=cantidad;i++) {
        if(f[i].est == 1) {
            cout << "Nombre del cliente: " << f[i].nom << "\n";
            cout << "Numero de unidades solicitadas: " << f[i].num_u << "\n";
            cout << "Precio por unidad: " << f[i].precio << "\n";
            cout << "Total: " << f[i].total << "\n";
            cout << "\n**************\n";
        }
    }

    system("pause");
    system("cls");

    cout << "Clientes en estado pagado con factura mayor de una determinada cantidad\n";
    cout << "Ingrese dicha cantidad de productos: ";
    cin >> c;

    for(i = 1; i <= cantidad; i++) {
        if(f[i].est == 3) {
            if(f[i].num_u > c) {
                cout << "Nombre del cliente: " << f[i].nom << "\n";
                cout << "Numero de unidades solicitadas: " << f[i].num_u << "\n";
                cout << "Precio por unidad: " << f[i].precio << "\n";
                cout << "Total: " << f[i].total << "\n";
                cout << "\n**************\n";
            }
        }
    }
    float promedio = obtenerPromedio(f, cantidad);
    cout << "El promedio de las facturas es: " << promedio << endl;
    return 0;
}
*/
