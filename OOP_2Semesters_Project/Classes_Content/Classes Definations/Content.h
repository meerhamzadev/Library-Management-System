#pragma once
#include "Library.h"

//Defining Class

class Content:public Library {

	// data members

	std::string Itom_ID;
	std::string Temp_Library_ID;
	std::string Category;
	std::string Title;
	std::string Author;
	std::string publisher;
	int production_year;
	std::string Status;
	int copies;
	//********************************************************************************

	// public data members

public:
	// constructor

	Content();

	// setter function

	void set_Itom_ID(const std::string&);
	void set_Temp_Library_ID(const std::string&);
	void set_Category(const std::string&);
	void set_Title(const std::string&);
	void set_Author(const std::string&);
	void set_Publisher(const std::string&);
	void set_production_year(const int);
	void set_Status(const std::string&);
	void set_Copies(const int);
	//*********************************************************************************************

	// getter function
	std::string get_Itom_ID()const;
	std::string get_Temp_Library_ID()const;
	std::string get_Category()const;
	std::string get_Title()const;
	std::string get_Author()const;
	std::string get_Publisher()const;
	int get_production_year()const;
	std::string get_Status()const;
	int get_Copies()const;
	//**********************************************************************

};

