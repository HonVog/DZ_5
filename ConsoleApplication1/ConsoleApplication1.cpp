#include <iostream>
#include <vector>

#include "pond.h"

using namespace std;

enum CHOIS
{
	NEW_WATER = 1,
	CHECK_INFO,
	DELETE
};

int main()
{
	std::vector <pond> luhi;
	int choice;
	while (true)
	{
		std::cout << "Choose a team" << std::endl
			<< "1. Fill in information about the reservoir\n"
			<< "2. Check information about bodies of water\n"
			<< "3. Delete body information\n"
			<< "4. Exit\n\n"
			<< "Your choice? :";
		std::cin >> choice;
		switch (choice)
		{
		case NEW_WATER:

			break;
		case CHECK_INFO:

			break;
		case DELETE:

			break;
		default:
			break;
		}
	}

}

/*
Написать интерфейс для работы с классом. Реализовать 
динамический массив объектов класса с возможностью 
добавления, удаления объектов из массива. Реализовать 
возможность записи информации об объектах массива 
в текстовый файл, бинарный файл.
Используйте explicit конструктор и константные функциичлены (например, для отображения данных о водоёме и т.д.)
*/