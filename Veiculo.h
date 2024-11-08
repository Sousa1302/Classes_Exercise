#include <iostream>

using namespace std;

class Veiculo{
    private:
        string vehicle_name;

        virtual void mostrarDetalhes(){
            // cout da informacao
        }

    public:
        Veiculo(string vehicle_name);
};