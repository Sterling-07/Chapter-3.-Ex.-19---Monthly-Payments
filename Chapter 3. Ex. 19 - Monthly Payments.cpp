/* File Name: Chapter 3 - Monthly Payments
* Programmer: Philip Rodgers
* Date: September 2025
* Requirements: Create a program that gathers the necessary monthly payment information and uses it to calculate and display the monthly payment report. 
*/

#include <iostream>
#include <cmath>
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

	cout << "Loan amount: $" << loan << "\n";
	cout << "Monthly interest rate: " << rate << "%" << "\n";
	cout << "Number of payments: " << numbp << "\n";
	cout << "Monthly payment: $" << payment << "\n";
	cout << "Amount paid back: $" << payment * numbp << "\n";
	cout << "Interest paid: $" << (payment * numbp) - loan << "\n";
}


