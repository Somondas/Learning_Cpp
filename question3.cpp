// >> Bad Code
// #include <iostream>

// using namespace std;
// int main(){
//     double sales = 95000;
//     double state_tax = sales * .04;
//     double county_tax = sales *.02;

//     cout << "Sales = $" << sales << endl
//          << "State Tax = $" << state_tax << endl
//          << "County Tax = $" << county_tax << endl
//          << "Total Tax = $" << county_tax + state_tax;

//     return 0;
    

// } 

// TODO: Calculate the State tax County Tax and Total Tax?
// >> Good Code
#include <iostream>

using namespace std;
int main(){
    double sales = 95000;
    cout << "Sales = $" << sales << endl;
    
    const double state_tax_rate = .04;
    double state_tax = sales * state_tax_rate;
    cout << "State Tax = $" << state_tax << endl;

    const double county_tax_rate = .02;
    double county_tax = sales * county_tax_rate;
    cout << "County Tax = $" << county_tax << endl; 

    cout << "Total Tax = $" << county_tax + state_tax;


    return 0;
    

} 

// TODO: Calculate the State tax County Tax and Total Tax?