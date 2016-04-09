#include<iostream>
const int size = 10;
void strcount(const char * str);
int main()
{
	using namespace std;
	char input[size];
	char next;

	cout << "enter a line:\n";
	cin.get(input, size);
	while (cin)
	{
		cin.get(next);
		while (next != '\n')
			cin.get(next);
		strcount(input);
		cout << "enter next line(empty line to quit):\n";
		cin.get(input, size);
	}
	cout << "bye.\n";
	return 0;
}

void strcount(const char *str)
{
	using namespace std;
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\"" << " contains";
	while (*str++)
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}