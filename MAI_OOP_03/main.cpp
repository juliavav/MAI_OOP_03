#include <cstdlib>
#include <iostream>
#include "square.h"
#include "TListItem.h"
#include "TList.h"

int main(int argc, char** argv) {
	TList list;
	int menuNum = 7;
	long int size;
	std::cout << "Hello! That's my MENU:" << std::endl;
	while (menuNum != 0) {
		if ((menuNum >= 0) || (menuNum <= 7))
		{
			switch (menuNum)
			{
			case 0:
				std::cout << "Bye!" << std::endl;
				break;
			case 1:
				std::cout << "Please, enter a side of the square: " << std::endl;
				std::cin >> size;
				if (size >= 0) {
					list.addLast(Square(size));
					std::cout << "Square is added." << std::endl;
				}
				else {
					std::cout << "I can't make such square." << std::endl;
				}
				std::cout << "______________________________________" << std::endl;
				break;
			case 2:
				std::cout << "Please, enter a side of the square: " << std::endl;
				std::cin >> size;
				if (size >= 0) {
					list.addFirst(Square(size));
					std::cout << "Square is added." << std::endl;
				}
				else {
					std::cout << "I can't make such square." << std::endl;
				}
				std::cout << "______________________________________" << std::endl;
				break;
			case 3:
				std::cout << "Please, enter a side of the square you want to delete: " << std::endl;
				std::cin >> size;
				list.delElement(Square(size));
				std::cout << "______________________________________" << std::endl;
				break;
			case 4:
				std::cout << list << std::endl;
				std::cout << "______________________________________" << std::endl;
				break;
			case 5:
				std::cout << "Please, enter a side of the square you want to add: " << std::endl;
				std::cin >> size;
				std::cout << "Please, enter a side of the square after which you want to add: " << std::endl;
				long int size2;
				std::cin >> size2;
				list.insert(size2, size);
				std::cout << "______________________________________" << std::endl;
				break;
			case 6:
				list.eraseList();
				std::cout << "List is absolutely clean." << std::endl;
				std::cout << "______________________________________" << std::endl;
				break;
			case 7:
				std::cout << "1. Add new item in end of list." << std::endl;
				std::cout << "2. Add new item in begin of list." << std::endl;
				std::cout << "3. Delete item from list" << std::endl;
				std::cout << "4. Print list." << std::endl;
				std::cout << "5. Insert in list" << std::endl;
				std::cout << "6. Erase list." << std::endl;
				std::cout << "7. Print MENU." << std::endl;
				std::cout << "0. Exit out program." << std::endl;
				std::cout << "______________________________________" << std::endl;
				break;
			}
			//default:
			//std::cout<<"I hardly understand you!"<<std::endl;
		}
		else {
			std::cout << "I hardly understand you!" << std::endl;
		}
		std::cout << "Input from 1 to 7 or 0 for actions." << std::endl;
		std::cin >> menuNum;

	}


	//std::cout << list<<std::endl;
	system("pause");
	return 0;
}
//list.addFirst(Square(3));
//list.addFirst(Square(5));
//list.addLast(Square(4)); //works
//list.insert(Square(5),Square(4));//works
//list.delElement(Square(3));//works
//list.getElement(2); //works
//list.empty();