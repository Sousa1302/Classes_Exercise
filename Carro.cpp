#include "Carro.h"

Carro::Carro(string Vehicle_Name, int portas) : Veiculo(Vehicle_Name){
    num_portas = portas;
}

void Carro::mostrarDetalhes(){
    Veiculo::mostrarDetalhes();
    cout << "Numero de portas: " << num_portas << endl;
}