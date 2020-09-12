#pragma once
#include<iostream>
#include <string>
#include<fstream>
using namespace std;

//--------------- Defining class-----------------

class Library
{
	//declaring data members

	string LibraryID;
	string LibraryName;

	// Declaring public stuff 

public:

	//Default constructor

	Library();

	//Setter functions

	void setLibraryID(string LibraryID);

	void setLibraryName(string LibraryName);

	// Getter Functions

	string getLibraryID();

	string getLibraryName();

};