#pragma once
#include <iostream>
/// <summary>
/// класс водоем 
/// </summary>
/// <param name="pondName">название</param>
/// <param name="expanse">ширина</param>
/// <param name="length">длина</param>
/// <param name="maxDepth">максимальная глубина</param>
/// <param name="origin">происхождение водоема</param>
class pond
{
	std::string pondName;//название
	double expanse; // ширина
	double length;//длина
	double maxDepth;//максимальная глубина
	bool origin; // происхождение водоема
public:
	// конструктор
	explicit pond(std::string PpondName, double Pexpanse, double Plength, double PmaxDepth, bool Porigin):
		pondName{ PpondName }, expanse{ Pexpanse }, length{ Plength }, maxDepth{ PmaxDepth }, origin{ Porigin }{}
	explicit pond(std::string PpondName, double Pexpanse, double Plength, double PmaxDepth) :
		pond(PpondName, Pexpanse, Plength, PmaxDepth, true) {}
	explicit pond(std::string PpondName, double Pexpanse, double Plength) :
		pond(PpondName, Pexpanse, Plength, 0, true) {}
	explicit pond(std::string PpondName, double Pexpanse) :
		pond(PpondName, Pexpanse, 0, 0, true) {}
	explicit pond(std::string PpondName) :
		pond(PpondName, 0, 0, 0, true) {}
	explicit pond(std::string PpondName) :
		pond("NoName", 0, 0, 0, true) {}
	// деструктор
	~pond() {}
	//название
	std::string get_pondName() const { return pondName; }
	// ширина
	double get_expanse() const { return expanse; }
	//длина
	double get_length() const { return length; }
	//максимальная глубина
	double get_maxDepth() const { return maxDepth; }
	// происхождение водоема
	bool get_origin()  const { return origin; }
	// 1. пределения приблизительного объема
	double volume() {
		return expanse * length * maxDepth;
	}
	//2. Определения площади водной поверхности;
	double area() {
		return expanse * length;
	}
	//3. Метод для проверки относятся ли водоемы к одному типу(море - море; бассейн - пруд);
	void water() 
	{ std::cout << ((origin) ? "Lake" : "Pond") << std::endl; }

	// 4. Для сравнения площади водной поверхности водоемов одного типа;
	bool operator == (pond& Pond) {
		return pond::area() == Pond.area();
	}
	bool operator <= (pond& Pond) {
		return pond::area() <= Pond.area();
	}
	bool operator >= (pond& Pond) {
		return pond::area() >= Pond.area();
	}
	bool operator > (pond& Pond) {
		return pond::area() > Pond.area();
	}
	bool operator < (pond& Pond) {
		return pond::area() > (Pond.area());
	}
	//5. Для копирования объектов;
	explicit pond(const pond& Pond) : pondName{ Pond.get_pondName() }, expanse{Pond.get_expanse()},
		length{ Pond.get_length() }, maxDepth{ Pond.get_maxDepth() }, origin{Pond.get_origin()} {}
	pond& operator = (const pond& Pond) {
		pondName = Pond.get_pondName(); expanse = Pond.get_expanse();
		length = Pond.get_length(); maxDepth = Pond.get_maxDepth() ; origin = Pond.get_origin();
	}
	//6. Остальные методы на усмотрение разработчика (методы set и get)*/
	/// void NAFIG(){}
};
