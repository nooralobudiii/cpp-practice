#include <iostream> 
#include <stack>

using namespace std;

int main() {
    stack<char> myStack; //creates stack that stores char eg 'a'
    string str = "abcd";

    

    for(int i = 0; i < str.length(); i++) { // loops through str, d is the last to be read but at the top of myStack
        myStack.push(str[i]); //pushes char to myStack
    }
    


    while (!myStack.empty()) { //not empty: so if empty it stops
        cout << myStack.top(); //prints the char at the top of stack eg 'd'
        myStack.pop(); // removes the char at the top of the stack 
    }

    return 0;

}


    