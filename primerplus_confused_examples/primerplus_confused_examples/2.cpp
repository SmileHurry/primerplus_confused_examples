#include<iostream>

const int max = 5;

int main()
{
	using namespace std;
	int golf[max];
	cout << "please enter your golf scores." << endl;
	cout << "you must enter " << max << " rounds." << endl;
	int i;
	for (i = 0; i < max; i++)
	{
		cout << "round #" << i + 1 << ":";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
				cout << "please enter a number:";
		}

	}
	cout << golf[2] << endl;
	double total = 0.0;
	for (i = 0; i < max; i++)
	{
		total += golf[i];
	}
	cout << total / max << "=average score " << max << " rounds" << endl;
	cin.get();
	cin.get();
	return 0;
}