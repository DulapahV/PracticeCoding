// Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, 
// with their storage being handled automatically by the container.

// Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. 

// In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes there may be a need of extending the array.

// Removing the last element takes only constant time because no resizing happens.

// Inserting and erasing at the beginning or in the middle is linear in time.

// Certain functions associated with the vector are:
// Iterators

// begin() – Returns an iterator pointing to the first element in the vector
// end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
// rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
// cbegin() – Returns a constant iterator pointing to the first element in the vector.
// cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
// crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
// crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

#include <iostream>
#include <vector>
  
using namespace std;
  
int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    // The auto keyword directs the compiler to use the initialization expression of a declared variable, or lambda expression parameter, to deduce its type.
    // https://docs.microsoft.com/en-us/cpp/cpp/auto-cpp?view=msvc-160
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " "; // Output of begin and end: 1 2 3 4 5 
  
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " "; // Output of cbegin and cend: 1 2 3 4 5
  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " "; // Output of rbegin and rend: 5 4 3 2 1
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " "; // Output of crbegin and crend : 5 4 3 2 1
  
    return 0;
}