#include "Veiculo.h"

Veiculo::Veiculo(string Vehicle_Name){
    this->vehicle_name = Vehicle_Name;
}

void Veiculo::mostrarDetalhes(){
    cout << "Nome Veiculo: " << vehicle_name << endl;
}