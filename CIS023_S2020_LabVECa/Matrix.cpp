// Module:		Matrix.h
// Author:		Miguel Antonio Logarta
// Date:		April 20, 2020
// Purpose:		Implementation file for Matrix class
//				Node for vector
//

#include "framework.h"
#include "CIS023_S2020_LabVECa.h"

Matrix::Matrix(string str1, string str2, string str3, string str4, string str5)
{
	strName = str1;
	strDec = str2;
	strHex = str3;
	strOct = str4;
	strBin = str5;
}

string Matrix::GetstrName()
{
	return strName;
}

string Matrix::GetstrDec()
{
	return strDec;
}

string Matrix::GetstrHex()
{
	return strHex;
}

string Matrix::GetstrOct()
{
	return strOct;
}

string Matrix::GetstrBin()
{
	return strBin;
}

TCHAR* Matrix::GetszName()
{
	StringtoTCHAR(&strName, szReturn);
	return szReturn;
}

TCHAR* Matrix::GetszDec()
{
	StringtoTCHAR(&strDec, szReturn);
	return szReturn;
}

TCHAR* Matrix::GetszHex()
{
	StringtoTCHAR(&strHex, szReturn);
	return szReturn;
}

TCHAR* Matrix::GetszOct()
{
	StringtoTCHAR(&strOct, szReturn);
	return szReturn;
}

TCHAR* Matrix::GetszBin()
{
	StringtoTCHAR(&strBin, szReturn);
	return szReturn;
}
