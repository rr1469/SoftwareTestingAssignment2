#include <iostream>
#include <iomanip>

using namespace std;

void function()
{
	cout << "Please selcet from one of the following functions:" << endl;
	cout << "1. Body Mass Index (BMI)" << endl;
	cout << "2. Retirement Plan" << endl;
	cout << "3. Exit" << endl;
	cout << endl;
}


int main()
{
	function();
	float weight, height_feet, height_inches, BMI;
	int age, salary;
	float percentage, employer_assist, desired_savings, total_savings, total_annual_savings;
	float savings_duration, age_obtained;

	
	int choice;

	do {
		
		
		cout << "Your selection of function: ";
		cin >> choice;
		while (!(cin.good())) {
			cout << "Error. Number must be entered: ";
			cin.clear();
			cin.ignore(100, '\n');
			cin >> choice;
		}

		switch (choice)
		{
		case 1:
		{
			cout << "Enter your weight (in pounds): ";
			cin >> weight;

			cout << "Enter your height (in feet and inches): " << endl;
			cout << "Feets: ";
			cin >> height_feet;
			cout << "Inches:";
			cin >> height_inches;

			weight = weight * 703;
			float height = height_feet * 12 + height_inches;

			BMI = weight / (height * height);

			cout << fixed << setprecision(1) << "Your Body Mass Index (BMI) is: " << BMI << endl;

			if (BMI < 18.5) {
				cout << "You are Underweight." << endl;
			}
			if (BMI >= 18.5 && BMI < 25) {
				cout << "You are Normal weight." << endl;
			}
			if (BMI >= 25 && BMI < 30) {
				cout << " You are Overweight." << endl;
			}
			if (BMI >= 30) {
				cout << "You are Obese." << endl;
			}

			cout << endl;
			break;
		}


		case 2:
		{
			cout << "Input User's current age: ";
			cin >> age;
			cout << "Input User's annual salary: ";
			cin >> salary;
			cout << "Enter the percentage you will save from your salary(%): ";
			cin >> percentage;

			total_savings = ((percentage / 100) * salary);
			employer_assist = (total_savings) * 0.35;

			cout << "Enter your desired amount of savings / goal: ";
			cin >> desired_savings;

			total_annual_savings = total_savings + employer_assist;

			savings_duration = desired_savings / total_annual_savings;

			age_obtained = savings_duration + age;

			cout  << fixed << setprecision(1) << "You will meet your goal at " << age_obtained << " age." << endl;

			if (age_obtained < 100) {
				cout << "Your savings goal is met." << endl;
			}
			else {
				cout << "Your savings goal is not met." << endl;
			}

			cout << endl;
			break;						
		}

		case 3: {
			cout << endl;
			cout << "Thanks for using. See You next time." << endl;
			//exit(0);
			break;
			
		}

		default:

			cout << "Invalid input" << endl;
			cout << endl;
		} 

		cout << "\nPress the Enter key to return to the menu. " << endl;
		cin.get();
		cin.get();

	} while (choice != 3);
	return 0;
}
