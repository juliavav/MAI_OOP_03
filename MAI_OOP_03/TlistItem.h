#ifndef TLISTITEM_H
#define	TLISTITEM_H

#include "Square.h"
#include "Rectangle.h"
#include "Trapeze.h"

class TListItem {
public:
	TListItem(const Figure& figure);
	TListItem(const TListItem& orig);//copy constr
	friend std::ostream& operator<<(std::ostream& os, const TListItem& obj);
	friend bool operator==(TListItem& first, TListItem& last);

	TListItem* SetNext(TListItem* next);
	TListItem* GetNext();
	Figure GetFigure() const;

	virtual ~TListItem();
private:
	Figure figure;
	TListItem *next;
};

#endif	/* TLISTITEM_H */