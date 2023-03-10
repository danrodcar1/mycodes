// Example that shows how new functions can be define and called.
// How to pass values from  command line
// "For loop" is also introduced 

# include <vector>
# include <iostream>
# include <cstdlib>

using namespace std; //  Default used namespace
vector<float> mi_vector;

float add_vector_components()
{
    float sum =0;
    for (size_t  i=0; i<mi_vector.size(); i++) // Another possible way to write interations on a vector
        sum += mi_vector.at(i); // Other way to access elements
    return sum;
}

int main(int argc, char**argv)
{
    int *vector_pointer = new int[20]; 

    if (argc < 2 || argc > 2){ // Control structure
        cout << "Not correct number or arguments" << endl; // It is not necessary to use the namespace
        return (-1);
    }

    int vector_size = atoi(argv[1]); // argv[0] is de name of the command

    mi_vector.resize(vector_size);

    for (size_t i = 0; i < vector_size; i++){ // Iterates for all vector elements
        mi_vector[i] = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX)); // rand() return an iinteger number. Casting is requires to conver it from int to float
    }

    // Call a funcion to add all the components and print the result

    cout << "Suma de componentes= " << add_vector_components() << endl;

    return 0;
}

//TODO: Modify the code to allocate memory to mi_vector using new. Function parameters should be also modified.


