// ciclos anidados.cpp : 
// Betsabe Salazar
//


#include <iostream>
#include <string>

int main()
{
    int arreglo1[2] = { 1,2 };
    int contador[2][11] = { {0,1,2,3,4,5,6,7,8,9,10},
                            {0,1,2,3,4,5,6,7,8,9,10} };
    for (int j = 0; j < 2; j++)
    {
        std::cout << " Numero interno: " << j << std::endl;
        for (int k = 0; k < 10; k++)
        {
            std::cout << " numero externo: " << k << std::endl;
            std::cout << "la posicion ( " << j << "," << k << " ) cuenta " << contador[j][k] << std::endl;
        }
    }
}