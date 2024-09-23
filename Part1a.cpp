#include <iostream>
using namespace std;

 int QUARTER_VALUE = 25;
 int DIMES_VALUE = 10;
 int NICKEL_VALUE = 5;
 int PENNY_VALUE = 1;

int totalQuarters(int& amount) {
    return amount / QUARTER_VALUE;
}

int totalDimes(int& amount) {
    int quarters = totalQuarters(amount);
    return (amount - quarters * QUARTER_VALUE) / DIMES_VALUE;
}

int totalNickles(int& amount) {
    int quarters = totalQuarters(amount);
    int dimes = totalDimes(amount);
    return (amount - quarters * QUARTER_VALUE - dimes * DIMES_VALUE) / NICKEL_VALUE;
}

int totalPennies(int& amount) {
    int quarters = totalQuarters(amount);
    int dimes = totalDimes(amount);
    int nickels = totalNickles(amount);
    return (amount - quarters * QUARTER_VALUE - dimes * DIMES_VALUE-nickels*NICKEL_VALUE) / PENNY_VALUE;
}

