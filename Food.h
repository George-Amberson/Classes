#pragma once
#include "Tovar.h"
class Food : public Tovar //класс еда, наследник класса товар
{
private:
	int Calorycount; // имеет собственное поле число калорий
public:
	Food() :Tovar(),Calorycount(0){} //конструктор по умлочанию
	Food(const string& _name, const double& _price, const int& cc) :Tovar(_price, _name), Calorycount(cc) {} //конструктор от параметров
	void show()override; //переопределение функции вывода
	void check()override; //переопределение функции изменения значений параметров
	int get_calorycount(); //собственные методы класса фуд. В том числе метод меняющий значения поля
	void set_calorycount(const int& _lhs);

};

