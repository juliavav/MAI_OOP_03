#include "TListItem.h"
#include <iostream>

TListItem::TListItem(const Figure& figure) {
	this->figure = figure;
	this->next = nullptr;
	//std::cout << "List item: created" << std::endl;
}

TListItem::TListItem(const TListItem& orig) {
	this->figure = orig.figure;
	this->next = orig.next;
	//std::cout << "List item: copied" << std::endl;
}

TListItem* TListItem::SetNext(TListItem* next) {
	TListItem* old = this->next;
	this->next = next;
	return old;
}


TListItem* TListItem::GetNext() {
	return this->next;
}

TListItem::~TListItem() {
	std::cout << "List item: deleted" << std::endl;
	delete next;

}

std::ostream& operator<<(std::ostream& os, const TListItem& obj) {
	os << "[" << obj.figure << "]";//<< std::endl;
	return os;
}
