#include<iostream>

int main()
{
	using namespace std;
	char ch;
	int space = 0;
	int total = 0;
	cin.get(ch);
	while (ch != '.')
	{
		if (ch ==' ')
			space++;
		cout << "space=" << space;
		total++;
		cout << ",total=" << total << endl;
		cin.get(ch);
	}
	cout << space << " spaces," << total;
	cout << " characters total in sentencee\n";
	cin.get();
	cin.get();
	return 0;
}