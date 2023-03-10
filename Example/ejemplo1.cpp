// How to compile this program?: g++ -o ejemplo1 ejemplo1.cpp -std=c++11


// Example to introduce basic concepts: header files, main function, namespace, array allocation
// how to call object function


# include <vector>          // Header file where function class is defined: functions and variables
# include <iostream>        
# include <cmath>           
# include <ctgmath> 

int main(int argc, char *argv[]) //main function (return a integer value)
{

    // Example of creating arrays with vector
    // Easy but no recomendable for HPC because data could not be
    // consecutive in memory

    std::vector<int> mi_vector; // Class vector is defined in the namespace std
                                // mi_vector is define within the function main. Thus, it only exits in this
                                // function-> it is local variable (it is mapped in the program stack=)

    mi_vector.push_back(5); // 5 is the first element
    mi_vector.push_back(2); // 2 is de second element

    std::cout << "El tamaño del vector es de " << mi_vector.size() << " datos" << std::endl;
    std::cout << "El segundo elemento es " << mi_vector.at(1) << std::endl; // Also mivector[2]
    std::cout << "La raiz del primer elemento es " << sqrt(float(mi_vector[0])) << std::endl;

    mi_vector.clear(); // Clear content by mivector is kept

    // With specific memory allocation. This is the recomendable way of doing for coalescent access
    // Create a vector with room for 20 consecutive int values
    int *otro_vector = new int[20]; // otro_vector is a pointer to an array of consecutive 
                                    // memory positions (heap) containning int values.
                                    // new it's like calloc/malloc for erase memory in the heap

    otro_vector[4] = 5; // Writing an element
    otro_vector[0] = otro_vector[4]; // Reading and writing elements

    // Do not forget to free memory when array is not anymore used
    delete otro_vector; //it's like free in C

    return 0;
}

