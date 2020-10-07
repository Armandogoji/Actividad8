#include "computadora.h"

Computadora::Computadora()
{

}
Computadora::Computadora(int RAM, const string &SO, const string &Procesador, const string &nombre_equipo)
{
    this->RAM = RAM;
    this->SO = SO;
    this->Procesador = Procesador;
    this->nombre_equipo = nombre_equipo;
}
void Computadora::setRAM(int r){
    RAM = r;
}
void Computadora::setSO(const string &s){
    SO = s;
}
void Computadora::setProcesador(const string &p){
    Procesador = p;
}
void Computadora::setnombre_equipo(const string &n){
    nombre_equipo = n;
}
int Computadora::getRAM(){
    return RAM;
}
string Computadora::getSO(){
    return SO;
}
string Computadora::getProcesador(){
    return Procesador;
}
string Computadora::getnombre_equipo(){
    return nombre_equipo;
}