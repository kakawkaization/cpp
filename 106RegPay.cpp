#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double Principal, IntRate, PayPerYear,
        NumYears, PayMent, number, denom, b, e, AllSum;

    cout << "Enter sum of loan: ";
    cin >> Principal;

    cout << "Enter interest rate: ";
    cin >> IntRate;

    cout << "Enter number of payment per year: ";
    cin >> PayPerYear;

    cout << "Enter loan term: ";
    cin >> NumYears;

    number = IntRate * (Principal / PayPerYear);

    e = -(PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1;

    denom = 1 - pow(b, e);

    PayMent = number / denom;

    AllSum = PayMent * (PayPerYear * NumYears);



    cout << "Loan payment amount is " << PayMent << "\n";
    cout << "Entire sum of payments: " << AllSum << "\n";
}