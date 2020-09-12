#include"../Classes Definations/Borrowing.h"


// .................... Defining class methods................................

Borrowing::Borrowing()
{
	BorrowedItemId = "\0";
	BorrowedSuscriberID = "\0";
	BorrowDate.day = 0;
	BorrowDate.month = 0;
	BorrowDate.year = 0;
	ReturnDate.day = 0;
	ReturnDate.month = 0;
	ReturnDate.year = 0;
	Fee = 0.0;
}

/*........setters...........*/

void Borrowing::setBorrowedItemId(string BItemId)
{
	this->BorrowedItemId = BItemId;
}

void Borrowing::setBorrowedSuscriberId(string BSuscriberId)
{
	this->BorrowedSuscriberID = BSuscriberId;
}

void Borrowing::setBorrowdate(date In_BorrowDate)
{
	this->BorrowDate = In_BorrowDate;
}

void Borrowing::setReturndate(date In_ReturnDate)
{
	this->ReturnDate = In_ReturnDate;
}

void Borrowing::setFee(double In_Fee)
{
	this->Fee = In_Fee;
}

/*.........getters............*/

string Borrowing::getBorrowedItemId()
{
	return this->BorrowedItemId;
}

string Borrowing::getBorrowedSuscriberId()
{
	return this->BorrowedSuscriberID;
}

date Borrowing::getBorrowDate()
{
	return this->BorrowDate;
}

date Borrowing::getReturnDate()
{
	return this->ReturnDate;
}

double Borrowing::getFee()
{
	return this->Fee;
}
