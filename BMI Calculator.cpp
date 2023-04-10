//Author: Kemon Bynum
/*This program will calculate BMI by getting height and weight from user
and then telling the user if they are underweight, in healthy range, or overweight. 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	//declare variables 
	int userHeight;
	double userWeight;
	double BMI;
	
	//Get Height and Weight from user
	cout << "Please enter your height (inches): ";
	cin >> userHeight;
	cout << "\n";

	cout << "Please enter your weight (pounds): ";
	cin >> userWeight;
	cout << "\n";
	
	//Set an equation to calculate BMI
	BMI = userWeight * 703 / pow(userHeight, 2);
	
	//Print BMI on screen with only two decimal places
	cout << fixed << showpoint << setprecision(1);
	cout << "Your BMI is: " << BMI << endl;
	cout << "\n";
	
	//if BMI is less than 18.5, print "You are underweight"
	if (BMI < 18.5)
	{
		cout << "You are underweight." << endl;
	}
	//If BMI is between 18.5 and 24.9, print "You are average weight"
	if (BMI >= 18.5 && BMI <= 24.9)
	{
		cout << "You are of average weight." << endl;
	}
	//if BMI is between 25.0 and 24.9, print "You are average weight."
	if (BMI <= 29.9 && BMI >= 25.0)
	{
		cout << "You are overweight." << endl;
	}
	//else if user BMI is 29.9 or greater, print "You are of Obese."
	else if (BMI > 29.9)
	{
		cout << "You are of Obese." << endl;
	}
	else
	{
		cout << "error! Please refresh this program and try again." << endl;
	}
	return 0;
}
