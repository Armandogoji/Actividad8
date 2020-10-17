#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio{
    private:
    Computadora arreglo[5];
    size_t cont;
    public:
    Laboratorio();
    void agregarComputadora(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c){
        l.agregarComputadora(c);
        return l;
    }
};

#endif