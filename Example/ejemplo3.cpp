// Using global variables


# include <iostream>
# include <cstdlib>

int svar = 1; // Variable global que puede ser accedida por todas las funciones del código

void print_loop()
{
    int cont = svar;              // cont is a local variable. Its scope id print_loop function
    while (cont >= 0) {                 // Other type of loop
        std::cout << cont << std::endl;
        cont--;
    }
}

int main(int argc, char **v)
{
    
    svar = 3;             // Update contenr variable

    for (size_t i=0; i< 6; i++) // Variable i is define only in the scope of the lopp
        std::cout << i << std::endl;

    std::cout << i << std::endl; // Compiling error: is not defined.       

}

//TODO: Write ejemplo2 defining my_vector as global variable