#include "Food.h"
void Food::show()
{
	cout << "Food with name " << name << " and price " <<
		price << " and calorycount " << Calorycount << endl;
}
void Food::check()
{
	cout << "write correct name, push enter and write price and calorycount\n";
	cin.ignore(1);
	getline(cin, name);
	cin >> price >> Calorycount;
}
int Food::get_calorycount()
{
	return Calorycount;
}
void Food::set_calorycount(const int& _lhs)
{
	Calorycount = _lhs;
}