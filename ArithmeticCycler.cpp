#include <iostream>
using namespace std;

int main()
{
	double firstNumber, secondNumber, sumOfTwoNumbers, differenceOfTwoNumbers, productOfTwoNumbers, quotientOfTwoNumbers;

	//Starts with performing sum calculations
	cout << "Enter two numbers: ";
	cin >> firstNumber >> secondNumber;

	sumOfTwoNumbers = firstNumber + secondNumber;

	cout << "Sum of " << firstNumber << " and " << secondNumber << " is: " << sumOfTwoNumbers << endl;
	
	//Proceeds to performing difference calculations
	cout << "Enter two numbers: ";
	cin >> firstNumber >> secondNumber;

	differenceOfTwoNumbers = firstNumber - secondNumber;

	cout << "Difference of " << firstNumber << " and " << secondNumber << " is: " << differenceOfTwoNumbers << endl;
	
	
	//Then proceeds to perform product calculations
	cout << "Enter two numbers: ";
	cin >> firstNumber >> secondNumber;

	productOfTwoNumbers = firstNumber * secondNumber;

	cout << "Product of " << firstNumber << " and " << secondNumber << " is: " << productOfTwoNumbers << endl;

	//Lastly, proceeds to perform quotient calculations
	cout << "Enter two numbers: ";
	cin >> firstNumber >> secondNumber;

	quotientOfTwoNumbers = firstNumber / secondNumber;

	cout << "Quotient of " << firstNumber << " and " << secondNumber << " is: " << quotientOfTwoNumbers << endl;

	system("pause>0");

}