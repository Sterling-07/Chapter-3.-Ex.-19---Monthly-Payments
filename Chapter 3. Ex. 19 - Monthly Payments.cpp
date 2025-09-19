/* File Name: Chapter 3 - Monthly Payments
* Programmer: Philip Rodgers
* Date: September 2025
* Requirements: Create a program that gathers the necessary monthly payment information and uses it to calculate and display the monthly payment report. 
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double rate, numbp, loan;
	double payment;

	cout << "Please enter the monthly interest rate of the payment in decimal form: ";
	cin >> rate;
	cout << "Please enter the number of payments for the loan: ";
	cin >> numbp;
	cout << "Please enter the amount of the loan: $";
	cin >> loan;

	payment = rate * pow(1 + rate, numbp) / (pow(1 + rate, numbp) - 1) * loan;

	cout << "Loan amount: " << setw(12) << "$" << setw(9) << loan << setprecision(7) << "\n";
	cout << "Monthly interest rate: " << setw(10) << rate * 100 << "%" << "\n";
	cout << "Number of payments: " << setw(14) << numbp << "\n";
	cout << "Monthly payment: " << setw(8) << "$" << setw(9) << setprecision(5) << payment << "\n";
	cout << "Amount paid back: " << setw(7) << "$" << setw(9) << setprecision(7) << (payment * numbp) << "\n";
	cout << "Interest paid: " << setw(10) << "$" << setw(9) << setprecision(6) << (payment * numbp) - loan << "\n";
}


