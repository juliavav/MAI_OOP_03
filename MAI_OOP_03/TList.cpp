#include "TList.h"

TList::TList() {
	first = nullptr;
}


std::ostream& operator<<(std::ostream& os, const TList& list) {

	std::shared_ptr<TListItem> item = list.first;
	int i = 1;
	while (item != nullptr)
	{
		std::cout << "[" << i << "]";
		item->GetFigure()->Print();
		item = item->GetNext();
		i++;
	}

	return os;
}

void TList::addFirst(std::shared_ptr<Figure> &figure) {
	std::shared_ptr<TListItem> other = std::make_shared<TListItem>(figure);

	other->SetNext(first);
	first = other;
}


bool TList::empty() {
	return first == nullptr;
}

void TList::delElement(int &index)
{
	std::shared_ptr<TListItem>iter = this->first;
	//int i = 0;
	if (iter != nullptr) {
		if (index=0) {
			first = nullptr;
			std::cout << "Figure is deleted." << std::endl;
		}
		else {
			if (!(iter->GetNext() == nullptr)) {
				while (!(iter->GetNext() == nullptr) && !(--index!=0)) {
					iter = iter->GetNext();
				}
				if (!(iter->GetNext() == nullptr)) {
					iter->SetNext(iter->GetNext()->GetNext());
					std::cout << "Figure is deleted." << std::endl;
				}
				else {
					std::cout << "There is no such index!" << std::endl;
				}
			}
			else {
				std::cout << "There is no such index!" << std::endl;
			}
		}
	}
}
void TList::eraseList() {
	first = nullptr;
}

TList::~TList() {
	std::cout << "List deleted!" << std::endl;
	//delete first;
}
