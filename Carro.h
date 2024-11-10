#ifndef CARRO_H
#define CARRO_H

#include "Veiculo.h"

class Carro : public Veiculo{
    private: 
        int num_portas;

    public:
        Carro(string vehicle_name, int num_portas);

        void mostrarDetalhes() override;
};
#endif



