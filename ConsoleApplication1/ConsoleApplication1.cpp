#include <iostream>
#include <vector>

#include "pond.h"

using namespace std;

enum CHOIS
{
	NEW_WATER = 1,
	CHECK_INFO,
	DELETE,
	EXIT
};

int main()
{
	std::vector < pond > luhi;
	int choice;
	pond Pond{};
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
			Pond.skan();
			luhi.push_back(Pond);
			continue;
		case CHECK_INFO:
			for (int i = 0; i < (int)luhi.size(); ++i) {
				std::cout << std::endl << i + 1 << "Element : ";
				luhi[i].print();
			}
			continue;
		case DELETE:
			std::cout << "Lead which body of water you want to remove by number? :";
			std::cin >> choice;
			if (choice > (int)luhi.size()) {
				std::cout << "Wrong input !";
				system("pause");
				continue;
			}
			Pond = pond{};
			luhi[choice] = Pond;
			 continue;
		case EXIT:
			return 1;
		default:
			std::cout << "Wrong input " << std::endl;
			break;
		}
	}
	return 0;
}

/*
Написать интерфейс для работы с классом. Реализовать 
динамический массив объектов класса с возможностью 
добавления, удаления объектов из массива. Реализовать 
возможность записи информации об объектах массива 
в текстовый файл, бинарный файл.
Используйте explicit конструктор и константные функциичлены (например, для отображения данных о водоёме и т.д.)
*/