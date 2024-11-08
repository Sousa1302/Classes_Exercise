#include <iostream>

using namespace std;

class Veiculo{
    protected:
        string vehicle_name;


    public:
        Veiculo(string vehicle_name) : vehicle_name(vehicle_name){

        }
        
        virtual void mostrarDetalhes(){
            cout << "Nome do veiculo: " << vehicle_name << endl;
        }
};


class Mota : public Veiculo{
    private:
        string guidao;

    public:
        Mota(string guidao, string Name) : Veiculo(Name), guidao(guidao){

        }

        void mostrarDetalhes() override{
            cout << "Mota: " << vehicle_name << " e o tipo de guidao: " << guidao << endl;
        }
};


class Carro : public Veiculo{
    private:
        string numPortas;
        
    public:
        Carro(string NumPortas, string Name) : numPortas(numPortas), Veiculo(Name){
            
        }

        void mostrarDetalhes() override{
            cout << "Carro: " << vehicle_name << " e o num de portas: " << numPortas << endl;
        }
};


int main(){
    Carro car_1();
    return 0;
}