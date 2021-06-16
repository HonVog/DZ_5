#pragma once
#include <iostream>

/// <summary>
/// class apartment
/// </summary>
/// <param name="tip">apartment type variable</param>
/// <param name="size">variable size apartment</param>
/// <param name="price">variable apartment price</param>
class Flat
{
private:
	std::string tip;
	double size;
	double price;
public:
	//constructor
	Flat(std::string tipP, double sizeP, double priceP) : 
		tip{ tipP }, size{ sizeP }, price{ priceP } {}
	Flat(std::string tipP, double sizeP):Flat (tipP, sizeP, 1000000) {}
	Flat(std::string tipP):Flat(tipP, 2, 1000000) {}
	Flat() :Flat("", 0, 0) {}

	//destructor
	~Flat() {}
	
	// operators
	bool operator == (Flat& flat) { return (size == flat.size); } // ==
	bool operator > (Flat& flat) { return (price > flat.price); }// >
	bool operator >= (Flat& flat) { return (price >= flat.price); }// >=
	bool operator < (Flat& flat) { return (price < flat.price); } // <
	bool operator <= (Flat& flat) { return (price <= flat.price); }// <=
	bool operator != (Flat& flat) { return (price != flat.price); }// !=
	void operator = (Flat& flat) { tip = flat.tip; size = flat.size; price = flat.price; } // =
	void operator ++ () { ++size; ++price; } // ++
	void operator ++(int) { size++; price++; } // ++
	void operator -- () { --size; --price; } // --
	void operator --(int) { size--; price--; }//--

	void print() {
		std::cout << "apartment type variable : " << tip << std::endl
			<< "variable size apartment : " << size << std::endl
			<< "variable apartment price : " << price << std::endl;
	}
};

/*Задание 2. 
Создать класс Flat (квартира).
Реализовать перегруженные операторы:
1. Проверка на равенство площадей квартир (операция 
==).
2. Операцию присваивания одного объекта в другой 
(операция =).
3. Сравнение двух квартир по цене (операция>).*/
