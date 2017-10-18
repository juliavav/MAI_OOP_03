#ifndef TLIST_H
#define	TLIST_H

#include "Square.h"
#include "Rectangle.h"
#include "Trapeze.h"
#include "TListItem.h"

class TList {
public:
	TList();
	TList(const TList& orig);

	void addFirst(Figure &&figure);
	bool empty();
	void delElement(int & index);
	void eraseList();
	friend std::ostream& operator<<(std::ostream& os, const TList& stack);
	virtual ~TList();
private:

	TListItem *first;
};

#endif	/* TLIST_H */