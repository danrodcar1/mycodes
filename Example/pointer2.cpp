// Double pointer
# include <iostream>

int main(int argc, char **argv)
{

    float val1 = 1.1, val2=2.2;

    // double pointer of float: A float pointer that points to an array the float pointers
    float **p = new float*[10]; // An array with 10 pointers to float

    p[0] = &val1; // p[0] point to val1

    std::cout << "Pointer value=" << p[0] << "\tContent of memory postion=" << *p[0] << std::endl;

    p[1] = new float[20]; // p1 is poiting to an array of ten floats
    p[1][0] = 3.3;
    p[1][1] = 4.4; 
    
    std::cout << "New array of 20 floats starts at=" << p[1] << "\tContent of first array postion=" << p[1][0] << std::endl;

    return 0;
}   

