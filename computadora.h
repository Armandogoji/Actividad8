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
    friend ostream& operator<<(ostream &out, const Computadora &c){
        out << left;
        out << setw(7) << c.RAM;
        out << setw(10) << c.SO;
        out << setw(12) << c.Procesador;
        out << setw(10) << c.nombre_equipo;
        out << endl;
        return out;
    }
    friend istream& operator>>(istream &in, Computadora &c){
        cout << "RAM: ";
        cin >> c.RAM;
        
        cout << "SO: ";
        getline(cin, c.SO);

        cout << "Procesador: ";
        getline(cin, c.Procesador);

        cout << "Nombre del equipo: ";
        getline(cin, c.nombre_equipo);

        return in;
    }
};

#endif