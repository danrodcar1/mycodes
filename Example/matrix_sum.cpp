#include <iostream>
#include <chrono>

using namespace std;  
using namespace std::chrono; // Avoiding long types

int main(int argc, char **argv)
{
    if (argc < 2 || argc > 3){ // Control structure
        cout << "Not correct number or arguments" << endl; // It is not necessary to use the namespace
        return (-1);
    }

    int nrows = atoi(argv[1]);
    int ncols = atoi(argv[2]);

    // Allocate memory for the fist matrix and create pointer for data access
    double **A = new double*[nrows]; // A vector of nrwos elements. Each element is a pointer to double data
    for (size_t i=0; i < nrows; i++)
        A[i] = new double[ncols]; // A vecto od ncols elements. Each elemnt is a double. 

    // Allocate memory for the second matrix
    double **B = new double*[nrows]; // A vector of nrwos elements. Each element is a pointer to double data
    for (size_t i=0; i < nrows; i++)
        B[i] = new double[ncols]; 

    // Allocate memory for the result 
    double **C = new double*[nrows]; // A vector of nrwos elements. Each element is a pointer to double data
    for (size_t i=0; i < nrows; i++)
        C[i] = new double[ncols]; 

    // Initialize values for A and B
    for (size_t i=0; i<nrows; i++) {
        for (size_t j=0; j<ncols; j++) {
            A[i][j] = static_cast<double> (rand()) /static_cast<double> (RAND_MAX); // Obser haw bidimensional data is addressed
            B[i][j] = static_cast<double> (rand()) /static_cast<double> (RAND_MAX); // Obser haw bidimensional data is addressed 
        }
    }

    //Annoate starting time. Matrix initialization time is not taken into account
    //chrono::high_resolution_clock start = chrono::high_resolution_clock::now();
    auto start = high_resolution_clock::now();
    // Computation
    for (size_t i=0; i<nrows; i++) {
        for (size_t j=0; j<ncols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Annotate finishing time
    auto stop = high_resolution_clock::now(); // auto deduces the type from the initialization expression

    // Calculate duration
    // use time function to measure process time
    std::chrono::duration<double> elapsed = stop - start;

    cout << "Time taken by function: "
         << elapsed.count() << " seconds" << endl;
    
    return 0;
    
}

// TODO:
// Add ckecking arguments from command line: two arguments and they are positive
// Move the computation to a function and do the parameter passsing and result returning
// Use global variables to reduce the number of parameters passed to the function 
//  Change the double pointer for a simple pointer a rewrite the code.
