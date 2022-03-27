#include <iostream>
using namespace std;

int main() {
	//You can cutomize question and answers on your own!
	int points = 0;
	string a;
	cout << "Which is faster programming language? (C++,Python or Java)"; //You can change the question according to you
	cin >> a;
	int newPoints=0;
	
	

	if (a == "C++" or a == "c++") {
		cout << "This is the correct answer";
	    newPoints = points + 5;
		points = newPoints;
		points = +5;
		cout << endl;
		cout << "Points:" << newPoints << endl;

	}
	else {
		cout << "This is the wrong answer";
		cout << endl;
		cout << "Points:" << newPoints<<endl;
	}
	//This is the second question
	string b;
	cout << "Which  variable type is used to store numbers with upto 15 decimal places?"; //You can change the question according to you
	cin >> b;

	if (b == "double" or b == "Double") {
		cout << "This is the correct answer";
		newPoints = points + 5;
		points += 5;
		points = newPoints;
		cout << endl;
		cout << "Points:" << newPoints << endl;
	}
	else {
		cout << "This is the wrong answer";
		cout << endl;
		cout << "Points:" << newPoints << endl;
	}

	//This is the third question
	string c;
	cout << "Who invented c++?(Enter answer without space)"; //You can change the question according to you
	cin >> c;

	if (c == "BjarneStroustrup" or c == "bjarnestroustrup") {
		cout << "This is the correct answer";
		newPoints = points += 5;
		points = newPoints;
		//points += 5;
		cout << endl;
		cout << "Points:" << newPoints << endl;
	}
	else {
		cout << "This is the wrong answer";
		cout << endl;
		cout << "Points:" << newPoints << endl;
	}

	//This is the 4th question
	string d;
	cout << "Which of the folloing type is provided by C++ but not C? (bool,float,double,int)"; //You can change the question according to you
	cin >> d;

	if (c == "Bool" or d == "bool") {
		cout << "This is the correct answer";
		newPoints = points += 5;
		points = newPoints;
		//points += 5;
		cout << endl;
		cout << "Points:" << newPoints << endl;
	}
	else {
		cout << "This is the wrong answer";
		cout << endl;
		cout << "Points:" << newPoints << endl;
	}

	//This is the 5th question
	string e;
	cout << "Which of the following is used to terminate the function declaration in C++ ? (; , ] , ), : )"; //You can change the question according to you
	cin >> e;

	if (e == ";") {
		cout << "This is the correct answer";
		newPoints = points += 5;
		points = newPoints;
		//points += 5;
		cout << endl;
		cout << "Points:" << newPoints << endl;
	}
	else {
		cout << "This is the wrong answer";
		cout << endl;
		cout << "Points:" << newPoints << endl;
	}

	//You can add more questions according to your need.
	cout << "QUIZ OVER"<<endl;

	if (newPoints == 25) {
		cout << "Congratulations!You scored " << newPoints << " Excellent!" << endl;
	}
	else if (points > 15 && points < 25) {
		cout << "Congratulations!You scored " << newPoints <<  " Very Nice!" << endl;
	}
	else if (points > 10 && points < 15) {
		cout << "Congratulations!You scored " << newPoints << " Not bad!" << endl;
	}
	else {
		cout << "You scored " << newPoints << " Try harder!" << endl;
	}
}
