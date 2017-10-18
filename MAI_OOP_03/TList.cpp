#include "TList.h"

TList::TList() : first(nullptr) {
}

TList::TList(const TList& orig) {
	first = orig.first;
}

std::ostream& operator<<(std::ostream& os, const TList& list) {

	TListItem *item = list.first;

	while (item != nullptr)
	{
		os << *item;
		item = item->GetNext();
	}

	return os;
}

void TList::addFirst(Figure &&figure) {
	TListItem *other = new TListItem(figure);
	other->SetNext(first);
	first = other;
}


bool TList::empty() {
	return first == nullptr;
}

void TList::delElement(int &index)
{
	TListItem* iter = this->first;
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
	delete first;
}
