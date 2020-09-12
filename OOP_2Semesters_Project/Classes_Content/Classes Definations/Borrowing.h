#pragma once
#include "Suscribers.h"

// Defining a struct for date object

struct date
{
	int day;
	int month;
	int year;
};

//derived class borrorwing

class Borrowing :public Suscriber
{
	/*..........Private Data Members.........*/
	string BorrowedItemId;
	string BorrowedSuscriberID;
	date BorrowDate;
	date ReturnDate;
	double Fee;

	/*..........Public Data Members..........*/
public:

	Borrowing();
	/*..........Setter Functions...........*/
	void setBorrowedItemId(string BItemId);

	void setBorrowedSuscriberId(string BsuscriberId);

	void setBorrowdate(date In_BorrowDate);

	void setReturndate(date In_ReturnDate);

	void setFee(double In_Fee);

	/*..........Getter Functions...........*/
	string getBorrowedItemId();

	string getBorrowedSuscriberId();

	date getBorrowDate();

	date getReturnDate();

	double getFee();

};

