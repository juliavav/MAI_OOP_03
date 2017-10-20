#ifndef TLISTITEM_H
#define	TLISTITEM_H

#include "Square.h"
#include "Rectangle.h"
#include "Trapeze.h"
#include <memory>

class TListItem {
public:
	TListItem(const std::shared_ptr<Figure> &figure);
	//TListItem(const TListItem& orig);//copy constr
	friend std::ostream& operator<<(std::ostream& os, const TListItem& obj);

	std::shared_ptr<TListItem> SetNext(std::shared_ptr<TListItem> next);
	std::shared_ptr<TListItem> GetNext();
	std::shared_ptr<Figure> GetFigure();
	//Figure GetFigure() const;

	virtual ~TListItem();
private:
	std::shared_ptr<Figure> figure;
	std::shared_ptr<TListItem> next;
};

#endif	/* TLISTITEM_H */