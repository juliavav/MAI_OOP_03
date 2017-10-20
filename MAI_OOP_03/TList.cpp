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

int TList::length() {
	int i = 0;
	std::shared_ptr<TListItem> item = this->first;
	while (item != nullptr)
	{
		item = item->GetNext();
		i++;
	}
	return i;
}
void TList::addFirst(std::shared_ptr<Figure> &figure) {
	std::shared_ptr<TListItem> other = std::make_shared<TListItem>(figure);

	other->SetNext(first);
	first = other;
}

void TList::insert(int index, std::shared_ptr<Figure> &figure) {
	std::shared_ptr<TListItem>iter = this->first;
	std::shared_ptr<TListItem> other = std::make_shared<TListItem>(figure);
	//int i = 0;
	if (index == 1) {
		other->SetNext(iter);
		this->first = other;
	}
	else {
		if (index <= this->length()) {
			int i = 1;
			for (i = 1; i < index - 1; ++i) {
				iter = iter->GetNext();
			}
			other->SetNext(iter->GetNext());
			iter->SetNext(other);
		}
		else {
			std::cout << "error" << std::endl;
		}
	}
}

void TList::addLast(std::shared_ptr<Figure> &figure) {
	std::shared_ptr<TListItem> other = std::make_shared<TListItem>(figure);
	std::shared_ptr<TListItem> iter = this->first;
	if (first != nullptr) {
		while (iter->GetNext() != nullptr) {
			iter = iter->SetNext(iter->GetNext());
		}
		iter->SetNext(other);// little bit strange
		other->SetNext(nullptr);
	}
	else {
		first = other;
	}
}

bool TList::empty() {
	return first == nullptr;
}

void TList::delElement(int &index)
{
	std::shared_ptr<TListItem>iter = this->first;
	//std::shared_ptr<TListItem> other = std::make_shared<TListItem>(figure);
	//int i = 0;
	if (index <= this->length()) {
	if (index == 1) {
		this->first = iter->GetNext();
	}
	else {
		int i = 1;
		for (i = 1; i < index - 1; ++i) {
			iter = iter->GetNext();
		}
		iter->SetNext(iter->GetNext()->GetNext());
	}

	}
	else {
		std::cout << "error" << std::endl;
	}
}

void TList::eraseList() {
	first = nullptr;
}

TList::~TList() {
	std::cout << "List deleted!" << std::endl;
	//delete first;
}
