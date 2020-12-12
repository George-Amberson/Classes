#include "Tovar.h"

Tovar::Tovar()
{
price = 0;
name = "No name";
}
void Tovar::show()
{
	cout << "product " << name << " with price " << price << endl;
}
void Tovar::check()
{
	cout << "write correct name push enter and write price:\n";
	cin.ignore(1);
	getline(cin, name);
	cin >> price;
}
void Tovar::set_price(const double& _lhs) 
{
	price = _lhs;
}
void Tovar::set_name(const string& _lhs)
{
	name = _lhs;
}
string Tovar::get_name()
{
	return name;
}
double Tovar::get_price()
{
	return price;
}