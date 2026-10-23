#include <iostream> 
#include <stack>
#include <string>

using namespace std;


int main() {

    // Asks user to enter a word
    string word;
    cout << "Enter a word: ";
    cin >> word;

    // Create an empty stack that stores characters 
    stack<char> myStack; 

    // Loop through each character in the word
    for(int i = 0; i < word.length(); i++) {
        myStack.push(word[i]);
    }
    
    // Create an empty string to story reversed char as a string
    string reversed = "";



    while (!myStack.empty()) { // Keep looping until stack is empty
        reversed += myStack.top(); // get the top char and add it to reversed empty string
        myStack.pop(); // remove thetop char from stack
    }


    // compare word to reversed
    if (word == reversed) { 
            cout << "This is a palindrome! \n";
    } else {
            cout << "This is not a palindrome! \n";
    }


    return 0; 

}
