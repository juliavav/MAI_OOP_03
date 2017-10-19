#include "TListItem.h"
#include <iostream>

TListItem::TListItem(const std::shared_ptr<Figure> & figure) {
	this->figure = figure;
	this->next = nullptr;
	//std::cout << "List item: created" << std::endl;
}

//TListItem::TListItem(const std::shared_ptr<Figure> & orig) {
//	this->figure = orig.figure;
//	this->next = orig.next;
//	//std::cout << "List item: copied" << std::endl;
//}

std::shared_ptr<TListItem>TListItem::SetNext(std::shared_ptr<TListItem> next) {
	std::shared_ptr<TListItem> old = this->next;
	this->next = next;
	return old;
}


std::shared_ptr<TListItem> TListItem::GetNext() {
	return this->next;
}

TListItem::~TListItem() {
}

std::ostream& operator<<(std::ostream& os, const TListItem& obj) {
	os << "[" << obj.figure << "]";//<< std::endl;
	return os;
}
