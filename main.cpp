#include <iostream>
#include "computadora.h"
using namespace std;


int main(){
    Computadora PC1 = Computadora(2048, "Windows", "Intel", "Armando");
    Computadora PC2;

    PC2.setRAM(1024);
    cout <<PC2.getRAM() <<endl;
    cout <<PC1.getRAM() <<endl;

   return 0; 
}