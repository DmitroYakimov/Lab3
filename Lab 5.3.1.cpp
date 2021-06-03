#include <iostream>
#include <string>

using namespace std;

class FlightBooking {
public:
	FlightBooking(int id, double capacity, double reserved);
	void printStatus();
	double check();
	void add(int reserved);
	void cancel(int reserved);
private:
	int id;
	double capacity;
	double reserved;
};
void FlightBooking::printStatus()
{
	cout << "Flight " << FlightBooking::id << ": " << FlightBooking::reserved << "/" << FlightBooking::capacity << " (" << FlightBooking::check() << "%) seats reserved" << endl;
}

double FlightBooking::check() {
	return FlightBooking::reserved / FlightBooking::capacity * 100;
}

void FlightBooking::add(int reserved) {
	FlightBooking::reserved += reserved;
	double persents = FlightBooking::check();
	if (persents > 105 || persents < 0) {
		cout << "Cannot perform this operation." << endl;
		FlightBooking::reserved -= reserved;
	}
	else {
		FlightBooking::printStatus();
	}
}

void FlightBooking::cancel(int reserved) {
	FlightBooking::reserved -= reserved;
	double persents = FlightBooking::check();
	if (persents > 105 || persents < 0) {
		cout << "Cannot perform this operation." << endl;
		FlightBooking::reserved += reserved;
	}
	else {
		FlightBooking::printStatus();
	}
}

FlightBooking::FlightBooking(int id, double capacity, double reserved)
{
	FlightBooking::id = id;
	FlightBooking::capacity = capacity;
	FlightBooking::reserved = reserved;
}

int main() {
tryAgain:
	double reserved = 0,
		capacity = 0;
	cout << "Provide flight capacity: ";
	cin >> capacity;
	cout << "Provide number of reserved seats: ";
	cin >> reserved;
	FlightBooking booking(1, capacity, reserved);
	if (booking.check() > 105 || booking.check() < 0) {
		cout << "Critical error!!!!!!!!!!!!!!!!!!" << endl << "Reserve limit exceeded" << endl << "Try again!!!" << endl;
		goto tryAgain;
	}
	booking.printStatus();
	cout << "1. Add" << endl << "2. Cancel" << endl << "3. Print Status" << endl << "4. Quit" << endl;
	bool cicle = true;
	int quantity = 0;
	while (cicle)
	{
		quantity = 0;
		int operation;
		cout << "Enter your operation: ";
		cin >> operation;
		switch (operation)
		{
		case 1:
			cout << "Enter quantity: ";
			cin >> quantity;
			booking.add(quantity);
			break;
		case 2:
			cout << "Enter quantity: ";
			cin >> quantity;
			booking.cancel(quantity);
			break;
		case 3:
			booking.printStatus();
			break;
		case 4:
			cout << "Quiting..." << endl;
			cicle = false;
		default:
			break;
		}

	}
	return 0;
}