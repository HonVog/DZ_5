#pragma once
#include <iostream>
/// <summary>
/// ����� ������ 
/// </summary>
/// <param name="pondName">��������</param>
/// <param name="expanse">������</param>
/// <param name="length">�����</param>
/// <param name="maxDepth">������������ �������</param>
/// <param name="origin">������������� �������</param>
class pond
{
	std::string pondName;//��������
	double expanse; // ������
	double length;//�����
	double maxDepth;//������������ �������
	bool origin; // ������������� �������
public:
	// �����������
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
	// ����������
	~pond() {}
	//��������
	std::string get_pondName() const { return pondName; }
	// ������
	double get_expanse() const { return expanse; }
	//�����
	double get_length() const { return length; }
	//������������ �������
	double get_maxDepth() const { return maxDepth; }
	// ������������� �������
	bool get_origin()  const { return origin; }
	// 1. ���������� ���������������� ������
	double volume() {
		return expanse * length * maxDepth;
	}
	//2. ����������� ������� ������ �����������;
	double area() {
		return expanse * length;
	}
	//3. ����� ��� �������� ��������� �� ������� � ������ ����(���� - ����; ������� - ����);
	void water() 
	{ std::cout << ((origin) ? "Lake" : "Pond") << std::endl; }

	// 4. ��� ��������� ������� ������ ����������� �������� ������ ����;
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
	//5. ��� ����������� ��������;
	explicit pond(const pond& Pond) : pondName{ Pond.get_pondName() }, expanse{Pond.get_expanse()},
		length{ Pond.get_length() }, maxDepth{ Pond.get_maxDepth() }, origin{Pond.get_origin()} {}
	pond& operator = (const pond& Pond) {
		pondName = Pond.get_pondName(); expanse = Pond.get_expanse();
		length = Pond.get_length(); maxDepth = Pond.get_maxDepth() ; origin = Pond.get_origin();
	}
	//6. ��������� ������ �� ���������� ������������ (������ set � get)*/
	/// void NAFIG(){}
};
