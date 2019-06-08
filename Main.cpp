#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <locale>
using namespace std;
// sout to bloom check
// sout to detroit check
// bloom to south check
// bloom to detroit check
// detroit to south check
//detroit to bloom check
int main(void) {
	// Your code here!
	// this program should ask the user where he/she plans on going
	cout << "Welcome to Maps.go\n" << endl;
	cout << "We have areas like Southfield, Bloomfield and Detroit saved in our data base.\n" << endl;
	// d ask for where the user plan on going
	// t ask for user type of transportation
	// l ask for user current location
	string d;
	string t;
	string l;
	// Asking for User input right now
	cout << "What is your current location?\n";
	cin >> l;
	 
	cout << "Where are you planning on going?\n";
	cin >> d;

	cout << "What type of transportation are you planning on using to get their? Example car, bus, and bike.\n";
	cin >> t;
	// Users input has been asked
	// if statement says that if user location is southfield, and their planning on going to bloomfield by any point of transportation.
	if (l == "soutfield" || l == "Southfield")  (d == "bloomfield" || d == "Bloomfield") && (t == "car" || t == "Car"); {
		cout << "It will take you 16 minutes to get from Southfield to Bloomfield by car.\n" << endl;
	};
    if (l == "southfield" || l == "Southfield")  (d == "bloomfield" || d == "Bloomfield") && (t == "bus" || t == "Bus"); {
		cout << "It will take you 1 h 42 minutes to get from Southfield to Bloomfield by car.\n" << endl;
	}; 
	if (l == "southfield" || l == "Southfield")  (d == "bloomfield" || d == "Bloomfield") && (t == "bike" || t == "Bike"); {
		cout << "It will take you 1 h 8 minutes to get from Southfield to Bloomfield by car.\n" << endl;
	};
	// if statement says that if user location is southfield, and their planning on going to Detroit by any point of transportation.
	if (l == "soutfield" || l == "Southfield")  (d == "detroit" || d == "Detroit") && (t == "car" || t == "Car"); {
		cout << "It will take you 19 minutes to get from Southfield to Detroit by car.\n" << endl;
	};
	if (l == "southfield" || l == "Southfield")  (d == "detroit" || d == "Detroit") && (t == "bus" || t == "Bus"); {
		cout << "It will take you 1 h 16 minutes to get from Southfield to Detroit by car.\n" << endl;
	};
	if (l == "southfield" || l == "Southfield")  (d == "detroit" || d == "Detroit") && (t == "bike" || t == "Bike"); {
		cout << "It will take you 1 hour 28 minutes to get from Southfield to Detroit by car.\n" << endl;
	};
	// if statement says that if user location is bloomfield, and their planning on going to southfield by any point of transportation.
	if (l == "bloomfield" || l == "Bloomfield") (d == "southfield" || d == "Southfield") && (t == "car" || t == "Car"); {
		cout << "It will take you 30 minutes to get from Bloomfield to Southfield by car.\n" << endl;
	};
	if (l == "bloomfield" || l == "Bloomfield")  (d == "southfield" || d == "Southfield") && (t == "bus" || t == "Bus"); {
		cout << "It will take you 45 minutes to get from Bloomfield to Southfield by bus.\n" << endl;
	};
	if (l == "bloomfield" || l == "Bloomfield")  (d == "southfield" || d == "Southfield") && (t == "bike" || t == "Bike"); {
		cout << "It will take you 1 hour to get from Bloomfield to Southfield by bike.\n" << endl;
	};
	// if statement says that if user location is bloomfield, and their planning on going to Detroit by any point of transportation.
	if (l == "bloomfield" || l == "Bloomfield")  (d == "detroit" || d == "Detroit") && (t == "car" || t == "Car"); {
		cout << "It will take you 30 minutes to get from Bloomfield to Detroit by car.\n" << endl;
	};
	if (l == "bloomfield" || l == "Bloomfield")  (d == "detroit" || d == "Detroit") && (t == "bus" || t == "Bus"); {
		cout << "It will take you 1 h 41 minutes to get from Southfield to Bloomfield by car.\n" << endl;
	};
    if (l == "bloomfield" || l == "Bloomfield")  (d == "detroit" || d == "Detroit") && (t == "bike" || t == "Bike"); {
		cout << "It will take you 2 h 23 minutes to get from Bloomfield to Detroit by car.\n" << endl;
	};
	// If statemnts says that if user location is detroit and their planning to go to southfield by any point of transportation.
	if (l == "detroit" || l == "Detroit")  (d == "southfield" || d == "Southfield") && (t == "car" || t == "Car"); {
		cout << "It will take you 19 minutes to get from Detroit to Southfield by car.\n" << endl;
	};
	if (l == "detroit" || l == "Detroit")  (d == "southfield" || d == "Southfield") && (t == "bus" || t == "Bus"); {
		cout << "It will take you 1 h 6 minutes to get from Detroit to Southfield by car.\n" << endl;
	};
	if (l == "detroit" || l == "Detroit")  (d == "southfield" || d == "Southfield") && (t == "bike" || t == "Bike"); {
		cout << "It will take you 1 h 30 minutes to get from Detroit to Southfield by car.\n" << endl;
	};
	// if statements says that if user location is detroit and their planning to go to bloomfield by any point of transportation.
	if (l == "detroit" || l == "Detroit")  (d == "bloomfield" || d == "Bloomfield") && (t == "car" || t == "Car"); {
		cout << "It will take you 31 minutes to get from Detroit to Bloomfield by car.\n" << endl;
	};
	if (l == "detroit" || l == "Detroit")  (d == "bloomfield" || d == "Bloomfield") && (t == "bus" || t == "Bus"); {
		cout << "It will take you 1 h 20 minutes to get from Detroit to Bloomfield by bus.\n" << endl;
	};
	if (l == "detroit" || l == "Detroit")  (d == "bloomfield" || d == "Bloomfield") && (t == "bike" || t == "Bike"); {
		cout << "It will take you 2 h 28 minutes to get from Detroit to Bloomfield by bike.\n" << endl;
	};
	system("pause");
	{
	return 0;
	}
};