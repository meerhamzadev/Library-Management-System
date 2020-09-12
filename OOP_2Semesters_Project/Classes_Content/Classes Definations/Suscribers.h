#pragma once
#include "Content.h"

//---------------- Defining Class --------------------

class Suscriber :public Content {

	//------------ Declaring data members ------------

	string suscriberId;
	string suscriberType;
	string suscriberName;
	string Adress;
	string phoneNumber;
	string Email;

public:
	//------------ Constructor --------------------

	Suscriber();

	//------------ Setter functions ---------------

	void setSuscriberid(string id);
	void setSuscribertype(string type);
	void setSuscribername(string name);
	void setAdress(string Adress);
	void setPhonenumber(string phnNumber);
	void setEmail(string Email);

	//-------------- Getter functions ---------------

	string getSuscriberid();
	string getSuscribertype();
	string getSuscribername();
	string getAdress();
	string getPhonenumber();
	string getEmail();
	
};