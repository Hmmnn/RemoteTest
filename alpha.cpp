#include <iostream>
#include <string>

using namespace std;

struct AB
{
	int* i;

	void AA(int* abc)
	{
		if(i == abc)
			cout << "AA" << endl;

		return;
	}

	void BB(int*& abc)
	{
		if(i == abc)
			cout << "BB" << endl;

		return;
	}
};

int main()
{
	int* a = new int(10);
	AB ab;
	ab.i = a;

	ab.AA(a);

	ab.BB(a);

	char c = '5';
	cout << (int)c << endl;

	cout << "�ι�° �귣ġ" << endl;
}