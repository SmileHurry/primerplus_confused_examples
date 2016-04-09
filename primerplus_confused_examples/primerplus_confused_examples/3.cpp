#include<iostream>
#include<fstream>
#include<cstdlib>

const int size = 60;

int main()
{
	using namespace std;
	char filename[size];
	ifstream infile;
	cout << "please input the name if the file that you want to open£º";
	cin.getline(filename, size);
	cout << "filename is: " << filename << endl;
	cin.get();
	infile.open(filename);
	if (!infile.is_open())
	{
		cout << "could not open the file: " << filename << endl;
		cout << "program terminating." << endl;
		exit(EXIT_FAILURE);
	}
	double value;
	int count=0;
	double sum=0;
	infile >> value;
	while (infile.good())
	{
		count++;
		sum = sum + value;
		infile >> value;
	}
	if (infile.eof())
		cout << "end of file reached." << endl;
	else if (infile.fail())
		cout << "words mismatch." << endl;
	else
		cout << "other reasons." << endl;
	if (count == 0)
		cout << "no data can be processed." << endl;
	else
	{
		cout << "include:" << count << " numbers." << endl;
		cout << "the sum of all number:" << sum <<"."<<endl;
		cout << "the average of all number:" << sum / count << endl;
	}
	cin.get();
	cin.get();
	return 0;
}