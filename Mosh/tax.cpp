#include <iostream> 

using namespace std; 

int main() {

    double sales = 95000;
    cout << "Sales: £" << sales << "\n";

    const double state_tax = 0.04;
    cout << "State Tax: £" << sales * state_tax << "\n";

    const double county_tax = 0.02;
    cout << "County Tax: £" << sales * county_tax << "\n";

    double total_tax = state_tax + county_tax;
    cout << "Total Tax: £" << sales * total_tax << "\n";

return 0;
}