#include <iostream>
using namespace std;

extern int QUARTER_VALUE ;
extern int DIMES_VALUE ;
extern int NICKEL_VALUE ;
extern int PENNY_VALUE ;

extern int totalQuarters(int& amount);
extern int totalDimes(int& amount);
extern int totalNickles(int& amount);
extern int totalPennies(int& amount);

int main() {
    int totalspending;
    
    cout << "Enter the total spending in cents (1-100): ";
    cin >> totalspending;
    
    if (totalspending < 1 || totalspending > 100) {
        cout << "Invalid amount. Please enter a value between 1 and 100." << endl;
        return 1;
    }
    int remainingAmount = 100-totalspending;
    cout << "Total amount owing:  "<< remainingAmount << endl;
    int quarters = totalQuarters(remainingAmount);
    int dimes = totalDimes(remainingAmount);
    int nickels = totalNickles(remainingAmount);
    int pennies = totalPennies(remainingAmount);
    
    cout << "Coins breakthrough" << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes <<  endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies <<  endl;
    
    return 0;
}
    