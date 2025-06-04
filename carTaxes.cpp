#include <iostream>
using namespace std;


float calculaAumento(char cod, float preco){
    float novoPreco;
    
    switch(cod){
        case 's':
            if (preco<150000.00){
                novoPreco = preco*1.11;
                break;
            }
            else if (preco >= 150000.00){
                novoPreco = preco*1.07;
                break;
            }
        
        case 'c':
            if (preco<100000.00){
                novoPreco = preco*1.09;
                break;
            }
            else{
                novoPreco = preco;
                break;
            }
        
        case 'p':
            novoPreco = preco*1.04;
            break;
        
        default:
            novoPreco = preco*1.05;
            break;
        
        }
    return novoPreco;
}

char imprimeMenuCod(){
    char cod;
    float preco;
    float novoPreco;
    cout << "Vamos calcular o aumento do preço do seu carro de acordo com a classe dele." << endl;
    cout << "Informe S, para sedã. Informe C, para conversível. Informe P, para popular. Informe qualquer letra, para outro." << endl;
    cout << "Informe a Letra que representa a classe do seu carro: " << endl;
    cin >> cod;
    
    return cod;
}

float imprimeMenuPreco(){
    float preco;
    cout << "Informe o valor do seu carro (Ex: 100000.00): " << endl;
    cin >> preco;
    
    return preco;
}

int main()
{
    char cod;
    float preco;
    float novoPreco;
    cod=imprimeMenuCod();
    preco=imprimeMenuPreco();
    novoPreco= calculaAumento(cod, preco);
    cout << "O preço do seu carro com o aumento é: " << novoPreco << endl;
    

    return 0;
}
