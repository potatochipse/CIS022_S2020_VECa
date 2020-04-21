// Module:		Matrix.h
// Author:		Miguel Antonio Logarta
// Date:		April 20, 2020
// Purpose:		Header for Matrix.cpp
//				Node for vector
//

#pragma once
class Matrix
{
	/*getline(fInput, strName, ',');
	getline(fInput, strDec, ',');
	getline(fInput, strHex, ',');
	getline(fInput, strOct, ',');
	getline(fInput, strBin, '\n');*/
public:
	// Constructor
	Matrix(string, string, string, string, string);

	// Accessors strings
	string GetstrName();
	string GetstrDec();
	string GetstrHex();
	string GetstrOct();
	string GetstrBin();

	// Accessors TCHARs
	TCHAR* GetszName();
	TCHAR* GetszDec();
	TCHAR* GetszHex();
	TCHAR* GetszOct();
	TCHAR* GetszBin();


private:
	// Store the data
	string strName;				// Name
	string strDec;				// Decimal value
	string strHex;				// Hexadecimal value
	string strOct;				// Octaldecimal value
	string strBin;				// Binary value

	TCHAR szReturn[TCHAR_SIZE];	// Return value for TCHAR accessors
};

