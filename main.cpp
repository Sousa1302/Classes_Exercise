#include "Carro.h"
#include "Mota.h"

int main(){
    Carro carro_1("Toyoto", 5);
    Mota mota_1("Kawazaki","Desportivo");

    carro_1.mostrarDetalhes();
    mota_1.mostrarDetalhes();

    return 0;
}