#include "../Classes Definations/Library.h"

//Defining class methods

Library::Library()
{
	LibraryID = "\0";
	LibraryName = "\0";
}

void Library::setLibraryID(string LibraryID)
{
	this->LibraryID = LibraryID;
}

void Library::setLibraryName(string LibraryName)
{
	this->LibraryName = LibraryName;
}

string Library::getLibraryID()
{
	return LibraryID;
}

string Library::getLibraryName()
{
	return LibraryName;
}



