#include <iostream>
#include <string>
using namespace std;

class Gym_booking {
private:
	int gym_id;
	string name;
	int month = 0;
public:
	void create();
	void del();
	void extend();
	void cancel();
	int quit();
	Gym_booking(int gym_id, string name, int month = 0);
};
int Gym_booking::quit() {
	cout << "Good Bye!!!" << endl;
	return 0;
};
Gym_booking::Gym_booking(int gym_id, string name, int month) {
	Gym_booking::gym_id = gym_id;
	Gym_booking::name = name;
	Gym_booking::month = month;
};
void Gym_booking::create() {
	cout << "Enter your id" << endl;
	cin >> this->gym_id;
	if (this->gym_id <= 10 && this->gym_id >= 1) {
		cout << "Your id " << this->gym_id << " is OK" << endl;
		cout << "Enter your name" << endl;
		cin >> this->name;
		cout << "Hello " << this->name << endl;
	}
	else {
		cout << "Wrong id" << endl;
	}
};

void Gym_booking::del() {
	cout << "Enter id which you want to delete" << endl;
	cin >> gym_id;
	gym_id = 0;
	name = "";
	cout << "The operation was success" << endl;
};
void Gym_booking::extend() {
	int additional_month;
	cout << "Enter quantity of month which you want to add" << endl;
	cin >> additional_month;
	month += additional_month;
};
void Gym_booking::cancel() {
	int a;
	cout << "Do you really want to change quantity of month to 0?" << endl;
	cout << "If you really want to set month to 0, enter 1, elth - enter 0" << endl;
	cin >> a;
	if (a == 1) {
		month = 0;
	}
	else { month = month; }
};
int main()
{


	Gym_booking user(1, "", 0);
	cout << "Hello admin" << endl;
	cout << "Menu" << endl;
	int t;
	bool start = true;

	while (start) {
		cout << "Enter 1 if you want to create user" << endl << "Enter 2 if you want to delete user" << endl
			<< "Enter 3 if you want to extend month quantity" << endl
			<< "Enter 4 if you want to cancel month quantity to 0" << endl << "Enter 5 if you want to exit" << endl;
		cin >> t;
		if (t < 1 && t>5)cout << "You entered the wrong number!" << endl;
		switch (t) {
		case 1:
			user.create();
			break;
		case 2:
			user.del();
			break;
		case 3:
			user.extend();
			break;
		case 4:
			user.cancel();
			break;
		case 5:
			start = false;
			cout << "Exited~_~";
			break;

		}
	}
};