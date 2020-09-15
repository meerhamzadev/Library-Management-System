#include"../Classes Definations/Suscribers.h"

//------------------ Defining functions --------------

Suscriber::Suscriber()
{
	suscriberId = "\0";
	suscriberType = "\0";
	suscriberName = "\0";
	Adress = "\0";
	phoneNumber = "\0";
	Email = "\0";
}


void Suscriber::setSuscriberid(string id)
{
	this->suscriberId = id;
}

void Suscriber::setSuscribertype(string type)
{
	this->suscriberType = type;
}

void Suscriber::setSuscribername(string name)
{
	this->suscriberName = name;
}

void Suscriber::setAdress(string Adress)
{
	this->Adress = Adress;
}

void Suscriber::setPhonenumber(string phnNumber)
{
	this->phoneNumber = phnNumber;
}

void Suscriber::setEmail(string Email)
{
	this->Email = Email;
}

string Suscriber::getSuscriberid()
{
	return this->suscriberId;
}

string Suscriber::getSuscribertype()
{
	return this->suscriberType;
}

string Suscriber::getSuscribername()
{
	return this->suscriberName;
}

string Suscriber::getAdress()
{
	return this->Adress;
}

string Suscriber::getPhonenumber()
{
	return this->phoneNumber;
}

string Suscriber::getEmail()
{
	return this->Email;
}