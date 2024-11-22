// if we do int x = 5; this goes in stack memory i.e., in static memory, we use pointer for run time memory allocation (dynamic memory allocation), in heap 

#include <iostream>
using namespace std;

int main() {
    int* a;
    a = new int(5); // now this int will go in heap memory

    // now we can use *a to access this new int that is equal to 5
    cout << *a + 9; // 5 + 9 = 14

    /* similarly we can create new float, new string, new char, 
    new<any datatype> .... */
}