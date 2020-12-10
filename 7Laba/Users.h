#pragma once
#include"MyString.h"
#include"MyDate.h"
#include "Obj.h"

class Users:public Obj
{

	MyString Name;
	MyString PhoneNumber;
	MyString Adress;
	MyString TypeOfBuilding;
	int Price;
	MyDate Date;
public:

	Users();
	Users(const MyString&, const MyString&, const MyString&, const MyString&, const int, const MyDate&);
	Users(const Users&);
	bool Equal(const Users&);
	~Users();

	operator char* ();

	Users& operator=(const Users&);
	friend bool operator==(const Users&, const Users&);
	friend bool operator!=(const Users&, const Users&);

	friend int CmpName(const Users&, const Users&);
	friend int CmpPhoneNuber(const Users&, const Users&);
	friend int CmpAdress(const Users&, const Users&);
	friend int CmpTypeOfBuilding(const Users&, const Users&);
	friend int CmpPrice(const Users&, const Users&);
	friend int CmpDate(const Users&, const Users&);


	MyString GetName() { return this->Name; };
	MyString GetPhoneNumber() { return this->PhoneNumber; };
	MyString GetAdress() { return this->Adress; };
	MyString GetTypeOfBuilding() { return this->TypeOfBuilding; };
	int GetPrice() { return this->Price; };
	MyDate GetDate() { return this->Date; };
	void ChangeName(const MyString& Name);
	void ChangePhoneNumber(const MyString& PhoneNumber);
	void ChangeAdress(const MyString& Adress);
	void ChangeTypeOfBuilding(const MyString& TypeOfBuilding);
	void ChangePrice(const int Price);
	void ChangeDate(const MyDate& Date);

	///
	MyString* ToMyString() { return new MyString("Users"); }
	Obj* copy();
	int equal(Users&);
	int equal(Obj&);
	void dispose();
	int cmp(Users&);
	int cmp(Obj&);
	///



	friend class Tabl;
};