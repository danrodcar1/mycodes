// Pointers
#include <iostream>
#include <string>

using namespace std;

int suma_componentes (int *array, int len)  // array se pasa por referencia (dir. memoria donde esta la variable) 
                                            // y len por valor (se copia el contenido)
{
    int resultado = 0;

    for (size_t i=0; i<len; i++)
        resultado += array[i];

    return resultado;
}


void otra_suma_componentes(int *array, int len, int *ret) // ret is a pointer
{
    int resultado = 0;
    for (size_t i=0; i<len; i++)
        resultado += array[i];
    *ret = resultado; // this stores in the pointed memory position the value of resultado
    return;
}

int main (int argc, char **argv) // argv is a double pinter of char
{

    int v[3]; // A vecto with three consecutive integer positions allocated in memory. 
                // v is a pointer to the first element

    v[0] = 1; v[1] =2; v[2]=3;

    cout << "Memory address with the first component of v= " << v << endl;  //Also &v[0];
    cout << "First vector value = " << v[0] << endl ;
    cout << "Memory address with the second component of v= " << &v[1] << endl;

    //Cambiar el contenido de un elemnto

    *(v+2) = 5; // The memory address v+2 is updated with the value 5.

    cout << "Third vector value = " << v[2] << endl ;

    int res;
    res = suma_componentes(v, 3);
    
    cout << "Suma= " << res << endl;

    int res1;
    otra_suma_componentes(v, 3, &res1);
    cout << "Suma1= " << res1 << endl;

}