#pragma once
#include "Tovar.h"
class Odezda : public Tovar //класс одежда наследник от класса товар
{
private:
	int size; //собственное поле размер одежды
public:
	Odezda() :Tovar(), size(0) {} //конструктор по услочанию
	
	Odezda(const string& _name, const double& _price, const int& _size) :Tovar(_price, _name), size(_size) {} //конструктор от параметров
	
	void show()override; //переопределение функции вывода
	void check()override;//переопределение функции изменения полей
	void set_size(const int& _lhs); //собственные метода класса в том числе метод меняющий значения поля
	int get_size();
};

