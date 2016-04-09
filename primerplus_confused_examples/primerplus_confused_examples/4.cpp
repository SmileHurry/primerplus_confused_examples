#include<iostream>
#include<fstream>

int main()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double b_price;

	ofstream outfile;
	outfile.open("carinfo.txt");
	//-------------------------------------------------------//
	cout << "enter the make and model of automobile:";
	cin.getline(automobile, 50);
	cout << "enter the model year:";
	cin >> year;
	cout << "enter the original asking price:";
	cin >> a_price;
	b_price = 0.913*a_price;
	//-------------------------------------------------------//
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "make and model:" << automobile << endl;
	cout << "year: " << year << endl;
	cout << "was asking $" << a_price << endl;
	cout << "now asking $" << b_price << endl;
	//-------------------------------------------------------//
	outfile << fixed;
	outfile.precision(2);
	outfile.setf(ios_base::showpoint);
	outfile << "make and model:" << automobile << endl;
	outfile << "year:" << year << endl;
	outfile << "was asking $" << a_price << endl;
	outfile << "now asking $" << b_price << endl;
	outfile.close();
	cin.get();
	cin.get();
	return 0;
}