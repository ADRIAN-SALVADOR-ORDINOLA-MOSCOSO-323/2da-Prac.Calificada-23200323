//https://github.com/ADRIAN-SALVADOR-ORDINOLA-MOSCOSO-323/2da-Prac.Calificada-23200323

//Práctica Calificada 2 - Fila D
/*
//Ejercicio 2:
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
struct Alumno {
    string nombre;
    vector<double> notas;
    double calcularMedia() const {
        double sum = 0.0;
        int cont = 0;
        for (int i = 0; i < notas.size(); ++i) {
            if (notas[i] >= 0) { 
                sum += notas[i];
                cont++;} }
        if (cont > 0) {
            return sum / cont;
        } else {
            return 0.0;
        }
    }
    double porcentajeFaltas() const {
        int falt = 0;
        for (int i = 0; i < notas.size(); ++i) {
            if (notas[i] == 0) {
                falt++;
            }
        }
        return (static_cast<double>(falt) / notas.size()) * 100;
    }
};
void calcularMediasGenerales(const vector<Alumno>& alumnos, int numAsign) {
    double sumaGeneral = 0.0;
    int totalNotas = 0;
    vector<double> sumaPorAsignatura(numAsign, 0.0);
    vector<int> contadorPorAsignatura(numAsign, 0);
    vector<int> totalFaltasPorAsignatura(numAsign, 0);
    for (int i = 0; i < alumnos.size(); ++i) {
        const Alumno& alumno = alumnos[i];
        for (int j = 0; j < numAsign; ++j) {
            if (alumno.notas[j] >= 0) { 
                sumaGeneral += alumno.notas[j];
                sumaPorAsignatura[j] += alumno.notas[j];
                contadorPorAsignatura[j]++;
                totalNotas++;
            }
            if (alumno.notas[j] == 0) {
                totalFaltasPorAsignatura[j]++;
            }
        }
    }
    double mediaGeneral;
    if (totalNotas > 0) {
        mediaGeneral = sumaGeneral / totalNotas;
    } else {
        mediaGeneral = 0.0;
    }
    cout << fixed << setprecision(2);
    cout << "Media general de la clase: "<<mediaGeneral<<endl;
    for (int i = 0; i < numAsign; ++i) {
        double mediaAsignatura;
        if (contadorPorAsignatura[i] > 0) {
            mediaAsignatura = sumaPorAsignatura[i] / contadorPorAsignatura[i];
        } else {
            mediaAsignatura = 0.0;
        }
        cout << "Media de la asignatura " << i + 1 << ": " << mediaAsignatura << endl;
        double porcentajeFaltasAsignatura = (static_cast<double>(totalFaltasPorAsignatura[i]) / alumnos.size()) * 100;
        cout << "Porcentaje de faltas en la asignatura " << i + 1 << ": " << porcentajeFaltasAsignatura << "%" << endl;
    }
}
int main() {
    int numAlumns, numAsign = 8;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> numAlumns;
    vector<Alumno> alumnos(numAlumns);
    for (int i = 0; i < numAlumns; ++i) {
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        cin >> alumnos[i].nombre;
        alumnos[i].notas.resize(numAsign);
        for (int j = 0; j < numAsign; ++j) {
            cout << "Ingrese la nota de la asignatura " << j + 1 << " (0 si falto y -1 si no tiene nota): ";
            cin >> alumnos[i].notas[j];
        }
    }
    cout << endl;
    for (int i = 0; i < alumnos.size(); ++i) {
        cout << "Media del alumno " << alumnos[i].nombre << ": " << alumnos[i].calcularMedia() << endl;
        cout << "Porcentaje de faltas del alumno " << alumnos[i].nombre << ": " << alumnos[i].porcentajeFaltas() << "%" << endl;
    }
    cout << endl;
    calcularMediasGenerales(alumnos, numAsign);
    return 0;
}
*/
