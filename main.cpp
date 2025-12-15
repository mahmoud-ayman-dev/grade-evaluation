#include <iostream>
#include <string>
using namespace std;

int  readnumber() {
	int Grade;
	cout << "please enter your Grade: ";
	cin >> Grade;
	return Grade;
}
string  checkGrade(int Grade) {
	if (Grade >=90 && Grade <= 100) {
		return "A";
	}
	else if (Grade >= 80 && Grade <= 89) {
		return "B";
	}
	else if (Grade >= 70 && Grade <= 79) {
		return "C";
	}else if (Grade >=60 && Grade <=69) {
		return "D";
	}
	else if (Grade >=50 && Grade <= 59) {
		return "E";
	}
	else {
		return "F";
	}
}
void printGradeResult(string result, int Grade) {
	cout << "your Grade is : " << Grade << endl;
	cout << "result: " << result << endl;
}

int main() {
	int number = readnumber();
	printGradeResult(checkGrade(number),number);

	return 0;
}
