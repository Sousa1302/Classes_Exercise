#include "Veiculo.h"

class Mota : public Veiculo{
    private:
        string vehicle_name;
        string guidao;
    
    public:
        Mota(string vehicle_name, string guidao);
};