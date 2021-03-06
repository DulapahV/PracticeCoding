// Example of Encapsulation


// You are a supercar engineer and currently setting the engine's horsepower.
// Complete the given program by completing methods to set and get the horsepower of the car object in order to output it.
// The program should warn "Too much" if the inputted horsepower is above 800.

// Sample Input
// 950

// Sample Output
// Too much
// 950

// You should use the if statement directly inside the setter function.

#include <iostream>
using namespace std;

//class definition
class Car{
    
    //private area
    private:
        int horsepowers;

    //public area
    public:
        //complete the setter function
        void setHorsepowers(int x) {
            if (x > 800)
                cout << "Too much\n";
            horsepowers = x;
        }
    
        //complete the getter function
        int getHorsepowers() {
            return horsepowers;
        }
        

};


int main() {
    //getting input
    int horsepowers;
    cin >> horsepowers;
    //creating the object of class Car
    Car car;
    //setting the value for private member
    car.setHorsepowers(horsepowers);
    //printing the value of private member
    cout << car.getHorsepowers();

    return 0;
}