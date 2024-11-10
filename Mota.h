#ifndef MOTA_H
#define MOTA_H

#include "Veiculo.h"

class Mota : public Veiculo{
    private:
        string guidao;
    
    public:
        Mota(string vehicle_name, string guidao);

        void mostrarDetalhes() override;
};
#endif