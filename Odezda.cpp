#include "Odezda.h"

void Odezda::show()
{
	cout << "Odezda " << name << " with price " << price << " and size " << size << endl;
}
void Odezda::check()
{
	cout << "write correct name, push enter and write price and size\n";
	cin.ignore(1);
	getline(cin, name);
	cin >> price >> size;
}
void Odezda::set_size(const int& _lhs)
{
	size = _lhs;
}
int Odezda::get_size()
{
	return size;
}