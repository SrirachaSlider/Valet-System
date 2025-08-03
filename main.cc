#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Car {
	int year;
	string color;
	string brand;
	string model;
	bool present = false; // checks if the car is currently parked or not	
public:
	Car(int newYear = 0, string newColor = "None", string newBrand = "None", string newModel = "None") : year(newYear), color(newColor), brand(newBrand), model(newModel) {}
	int get_year() { return year; }
	string get_color() { return color; }
	string get_brand() { return brand; }
	bool get_present() { return present; }
};

int main() {
	unordered_map<int, Car> car;
	int ticket = 0;
	int choice = 0;
	cout << "Enter a number to use the Valet System:\n";
	while (cin) {
		// for checking deque for avilaility and stuff, use the order it was put in as the ticket and use the .at() function to help.
		// ex: if someone enters a white kia at slot 3 and someone does the same for slot 7, to check which one to remove use the .at() and then change present to false
		cout << "1. Add a car to be parked\n2. Retrieve a car\n3. Quit\n";
		cin >> choice;
		if (choice == 1) {
			//When a car is added to the database, ensure to tell the user the ticket number (bec if there r 2 of the same car, you can use ticket number to retrieve it)
			ticket++;
			int year;
			string color, brand, model;
			cout << "Enter the year of the car:\n";
			cin >> year;
			cout << "Enter the color, brand, and model of the car, respectively:\n";
			cin >> color >> brand >> model;
			Car c(year, color, brand, model);
			car[ticket] = c;
			cout << "Car has been parked. Ticket #: " << ticket << endl;
		}
		else if (choice == 2) {
			// Use ticket to retrieve car
			
		}
		else break;
	}
}
