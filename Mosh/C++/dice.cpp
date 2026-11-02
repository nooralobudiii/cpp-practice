#include <iostream>  
#include <cstdlib> // library for rand() and srand()
#include <ctime> // library to use time()

using namespace std; 

int main() {

    const short min_value = 1;
    const short max_value = 6;

    srand(time(nullptr)); //Initialise the random number generator using the current time

   short dice_1= (rand() % (max_value - min_value+ 1)) + min_value;
   short dice_2= (rand() % (max_value - min_value+ 1)) + min_value;
   
   
   cout << dice_1 << "," << dice_2 << "\n";

   return 0;
}