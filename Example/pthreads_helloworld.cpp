#include <vector>
#include <thread>
#include <iostream>
#include <cstdlib>

using namespace std;

void print_hello(int thid)
{
    cout << "Hello, I´m the thread " << thid << endl;

}

int main (int argc, char **argv)
{
    int num_threads = atoi(argv[1]);
    
    vector<thread> vthread;

    for (size_t i=0; i<num_threads; i++)
        vthread.push_back(thread(print_hello, i));

    // for (size_t i=0; i<num_threads; i++)
    //    vthread[i].join();

    // Loop can be also written
    for (auto &t :vthread) // t iterates on vthread elements
        t.join();

return 0;


}