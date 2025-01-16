
#include <iostream>
using namespace std;
int main() {
    double savingsGoal, monthlyContribution, currentSavings = 0;
    int months, choice;

    cout << "Savings Goal Tracker" << endl;
    cout << "---------------------" << endl;
    cout << "Enter your savings goal: $";
    cin >> savingsGoal;

    cout << "Enter the number of months to reach your goal: ";
    cin >> months;

    monthlyContribution = savingsGoal / months;

    cout << "Monthly contribution needed to reach your goal: $" << monthlyContribution << endl;
  
    while (true) 
	{
        cout << "\nMenu" << endl;
        cout << "-----" << endl;
        cout << "1. Track progress" << endl;
        cout << "2. Update savings goal" << endl;
        cout << "3. Update number of months" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
		{
            if (months <= 0) {
                cout << "Invalid number of months. Please update." << endl;
            } else {
                for (int i = 1; i <= months; i++) {
                    currentSavings += monthlyContribution;
                    cout << "Month " << i << ": Current savings = $" << currentSavings << endl;
                }
                if (currentSavings >= savingsGoal) {
                    cout << "Congratulations! You have reached your savings goal." << endl;
                } else {
                    cout << "Sorry, you have not reached your savings goal." << endl;
                }
            }
        } else if (choice == 2) {
            if (savingsGoal <= 0) {
                cout << "Invalid savings goal. Please enter a positive value." << endl;
            } else {
                cout << "Enter new savings goal: $";
                cin >> savingsGoal;
                monthlyContribution = savingsGoal / months;
                cout << "Monthly contribution updated to: $" << monthlyContribution << endl;
            }
        } else if (choice == 3) {
            if (months <= 0) {
                cout << "Invalid number of months. Please enter a positive value." << endl;
            } else {
                cout << "Enter new number of months: ";
                cin >> months;
                monthlyContribution = savingsGoal / months;
                cout << "Monthly contribution updated to: $" << monthlyContribution << endl;
            }
        } else if (choice == 4) {
            return 0;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

