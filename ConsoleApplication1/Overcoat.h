#pragma once
#include <iostream>

/// <summary>
	/// class clothes
	/// </summary>
	/// <param name="tip">changing host type of clothing</param>
	/// <param name="name">changing host name or brand</param>
	/// <param name="size">changing the size of the clothes</param>
	/// <param name="price">changing the price of clothes</param>
class Overcoat
{
private:
	std::string tip;
	std::string name;
	int size;
	double price;
public:
	//constructor
	Overcoat(std::string tipP, std::string nameP, int sizeP, double priceP) :
		tip{ tipP }, name{ nameP }, size{ sizeP }, price{ priceP }{}
	Overcoat(std::string tipP, std::string nameP, int sizeP) : 
		Overcoat(tipP, nameP, sizeP, 0) {}
	Overcoat(std::string tipP, std::string nameP) :
		Overcoat(tipP, nameP, 40, 0) {}
	Overcoat(std::string tipP) : Overcoat(tipP, "Gabana", 70, 0) {}
	Overcoat() : Overcoat("underpants", "Gabana", 70, 0) {}

	//destructor
	~Overcoat() {}

	//operator
	bool operator ==(Overcoat& overcoat) {
		return (tip== overcoat.tip&& name == overcoat.name&& 
			size == overcoat.size&& price == overcoat.price);
	}

	void operator = (Overcoat& overcoat) {
		tip = overcoat.tip; name = overcoat.name;
		size = overcoat.size; price = overcoat.price;
	}

	bool operator > (Overcoat& overcoat) {
		return ((tip == overcoat.tip && name == overcoat.name)? ( price > overcoat.price): false);
	}

	bool operator < (Overcoat& overcoat) {
		return ((tip == overcoat.tip && name == overcoat.name)? ( price < overcoat.price): false);
	}

	bool operator <= (Overcoat& overcoat) {
		return ((tip == overcoat.tip && name == overcoat.name)? ( price <= overcoat.price): false);
	}

	bool operator >= (Overcoat& overcoat) {
		return ((tip == overcoat.tip && name == overcoat.name)? (price >= overcoat.price): false);
	}

	void print() {
		std::cout << "changing host type of clothing : " << tip << std::endl
			<< "changing host name or brand : " << name << std::endl
			<< "changing the size of the clothes : "<< size << std::endl
			<< "changing the price of clothes : "<< price << std::endl;
	}
};

/*Задание 1. 
Создать класс Overcoat (верхняя одежда).
Реализовать перегруженные операторы:
1. Проверка на равенство типов одежды (операция = =).
2. Операцию присваивания одного объекта в другой 
(операция =).
3. Сравнение по цене двух пальто одного типа (операция>).*/