#ifndef COMPUTADORA_H   
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora {
    private:
    int RAM;
    string SO;
    string Procesador;
    string nombre_equipo;
    public:
    Computadora();
    Computadora(int RAM, const string &SO, 
    const string &Procesador, const string &nombre_equipo);
    void setRAM(int r);
    void setSO(const string &s);
    void setProcesador(const string &p);
    void setnombre_equipo(const string &n);
    int getRAM();
    string getSO();
    string getProcesador();
    string getnombre_equipo();
    friend ostream& operator<<(ostream &out, const Computadora &p){
        out << left;
        out << setw(7) << p.RAM;
        out << setw(10) << p.SO;
        out << setw(12) << p.Procesador;
        out << setw(10) << p.nombre_equipo;
        out << endl;
        return out;
    }
    friend istream& operator>>(istream &in, Computadora &p){
        cout << "RAM: ";
        cin >> p.RAM;
        cout << "SO: ";
        getline(cin, p.SO);
        cout << "Procesador: ";
        getline(cin, p.Procesador);
        cout << "Nombre del equipo: ";
        getline(cin, p.nombre_equipo);
        return in;
    }
};

#endif