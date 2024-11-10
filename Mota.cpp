#include "Mota.h"

Mota::Mota(string Vehicle_Name, string Guidao) : Veiculo(Vehicle_Name){
    guidao = Guidao;
}

void Mota::mostrarDetalhes(){
    Veiculo::mostrarDetalhes();
    cout << "Guidao: " << guidao << endl;
}