#include "../Classes Definations/Content.h"



//Defining classs methods

Content::Content()
{
	Itom_ID = "\0";
	Category = "\0";
	Title = "\0";
	Author = "\0";
	publisher = "\0";
	production_year = 0;
	Status = "\0";
	copies = 0;
}
//*************************************************************************************

// set itom id 
void Content::set_Itom_ID(const string& Itom_ID)
{
	this->Itom_ID = Itom_ID;
}

//get itom id
string Content::get_Itom_ID()const
{
	return Itom_ID;
}
//********************************************************************************************

//Set Temprary Library ID
void Content::set_Temp_Library_ID(const string& id)
{
	this->Temp_Library_ID = id;
}

// Get temprary library id
string Content::get_Temp_Library_ID()const
{
	return Temp_Library_ID;
}

// set Category
void Content::set_Category(const string& Category)
{
	this->Category = Category;
}

//get category
string Content::get_Category()const
{
	return Category;
}
//********************************************************************************************


// set title
void Content::set_Title(const std::string& Title)
{
	this->Title = Title;
}
// get title
string Content::get_Title()const
{
	return Title;
}
//***********************************************************************************************


// set Author name
void Content::set_Author(const std::string& Author)
{
	this->Author = Author;
}

// get Author name
string Content::get_Author()const
{
	return Author;
}
//**************************************************************************************


// set publisher function
void Content::set_Publisher(const std::string& name)
{
	publisher = name;
}

// get publisher
string Content::get_Publisher()const
{
	return publisher;
}
//********************************************************************************************


// set production year
void Content::set_production_year(int year)
{
	production_year = year;
}

// get production year
int Content::get_production_year()const
{
	return production_year;
}
//*********************************************************************************************


// set status
void Content::set_Status(const std::string& status)
{
	Status = status;
}

// get Status function
string Content::get_Status()const
{
	return Status;
}
//***********************************************************************************************


// set copies
void Content::set_Copies(int copies)
{
	this->copies = copies;
}

// get copies
int Content::get_Copies()const
{
	return copies;
}
//*************************************************************************************************