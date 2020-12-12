#include "Food.h"
#include "Odezda.h"
using namespace std;

void Menu() //функция вывода меню на экран
{
	cout << "Menu:\n 1- write all objects on screen\n 2-rewrite some objects\n 3- count parametr\n 4- exit\n\n";
}

void Show(Tovar**& _lhs) //фунция вывода параметров на экран
{
	for (int i = 0; i < 4; i++) _lhs[i]->show();
}
void MaxPrice(Tovar**& _lhs) //функция поиска самого дорого товара, и его вывода на экран.
{
	double max = 0;
	int j = 0;
	for (int i = 0; i < 4; i++) 
	{
		if (max < _lhs[i]->get_price()) 
		{
			j = i;
		}
	}
	cout << "The most expensive product is:\n";
	_lhs[j]->show();
}
int main()
{
	Food a1;
	Odezda b1;
	Food a2("Pizza", 150,1200);
	Odezda b2("Helly Henderson", 12000, 41);
	Tovar** _array = new Tovar*[4];
	_array[0] = &a1;
	_array[1] = &a2;
	_array[2] = &b1;
	_array[3] = &b2;
	int numc = -1;
	int numo;
	//действия над обьектами доступны и меню ниже.
	while (numc != 4)
	{
		Menu();
		cin >> numc;
		switch (numc)
		{
		case 1:
			Show(_array);
			cout << endl;
			break;
		case 2:
			cout << "What number of object u wonna check\n";
			cin >> numo;
			_array[numo]->check();
			break;
		case 3:
			MaxPrice(_array);
			cout << endl;
			break;
		}
	}
}