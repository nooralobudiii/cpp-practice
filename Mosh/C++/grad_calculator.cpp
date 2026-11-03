#include <iostream> 
#include <iomanip>

using namespace std; 

// function 1 calcluateAverage()
double calculateAverage(double exam1,double exam2, double exam3) {
    double average = (exam1 + exam2 + exam3) / 3; 
    return average;
}

// function 2 getGrade()
char getGrade(double average) {
    int gradeGroup = static_cast<int>(average) / 10; // rounds down 
    
    switch (gradeGroup) {
        case 10:
        case 9:
        case 8: 
        case 7: 
        return 'A';
        break;
        case 6: 
        return 'B';
        break;
        case 5:
        return 'C';
        break;
        case 4:
        return 'D';
        break; 
        case 3:
        case 2: 
        case 1: 
        return 'F';   
        default:
        return 'F'; 
    }
}


// Function 3 hasPassed()
bool hasPassed(double average) {
    if (average >= 40){
        return true;
    } else {
        return false;
    }
}

int main () {
    double exam1;
    double exam2;
    double exam3;

    cout << "Enter exam 1 mark: ";
    cin >> exam1;

    cout << "Enter exam 2 mark: ";
    cin >> exam2;

    cout << "Enter exam 3 mark: ";
    cin >> exam3;

    double average = calculateAverage(exam1, exam2, exam3);
    char grade = getGrade(average);
    bool pass = hasPassed(average);

    cout << "Average: " << setprecision(4) << average << "\n";
    cout << "Grade: " << grade << "\n";
    cout << "Status: " << boolalpha << pass << "\n";

    return 0;

}