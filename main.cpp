#include <iostream>
using namespace std;

void calculateGrade(int x);

int main() {
	int grade;
	char goAgain=true;

	while (goAgain == true) {
		cout << "Enter a grade number: ";
		cin >> grade;

		calculateGrade(grade);

		cout << "Enter another grade? y/n" << endl;
		cin >> goAgain;
		if (goAgain == 'Y'|| goAgain =='y') {
			goAgain = true;
		}
		else {
			goAgain = false;
		}
	}
	return 0;
}

void calculateGrade(int x) {
	if (x == 100){
		cout << "You recieved a perfect score!" << endl;
	}
	else if (x >= 90 && x!= 100) {
		cout << "You scored an A" << endl;
	}
	else if (x >= 80 && x< 90) {
		cout << "You scored an B" << endl;
	}
	else if (x >= 70 && x< 80) {
		cout << "You scored an C" << endl;
	}
	else if (x >= 60 && x< 70) {
		cout << "You scored an D" << endl;
	}
	else if (x <= 59) {
		cout << "You scored an F" << endl;
	}

}
