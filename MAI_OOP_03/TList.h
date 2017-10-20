#ifndef TLIST_H
#define	TLIST_H

#include "Square.h"
#include "Rectangle.h"
#include "Trapeze.h"
#include "TListItem.h"
#include <memory>

class TList {
public:
	TList();
	
	int length();

	void addFirst(std::shared_ptr<Figure> &figure);
	void insert(int index, std::shared_ptr<Figure>& figure);
	//void insert(std::shared_ptr<Figure> &figureNext, std::shared_ptr<Figure> &figure);
	void addLast(std::shared_ptr<Figure>& figure);
	bool empty();
	void delElement(int & index);
	void eraseList();
	friend std::ostream& operator<<(std::ostream& os, const TList& stack);
	virtual ~TList();
private:

	std::shared_ptr<TListItem> first;
};

#endif	/* TLIST_H */