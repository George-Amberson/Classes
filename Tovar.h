#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class Tovar // базовый класс товар. Поля цена и имя товара.
{
protected:
	double price;
	string name;
public:
	Tovar(); //конструктор по умолчанию
	Tovar(const double& _price, const string& _name) :price(_price), name(_name) {}//конструктор от параметров
	virtual void show(); //виртуальная функция переопряделяемая в наследниках
	virtual void check();//виртуальная функция переопряделяемая в наследниках
	void set_price(const double& _lhs); // здесь и далее методы для вывода 
	void set_name(const string& _lhs); //или изменения полей базового класса. Наследуются в потомках
	string get_name();
	double get_price();
};