#include "HeaderNurse.h"

//--------------------------------------------------------------------------------//
Nurse::Nurse(const char* name, int employNum, int exp)
{
	setName(name);
	setEmployNum(employNum);
	setExp(exp);
}
//--------------------------------------------------------------------------------//
Nurse::Nurse(const Nurse& other)
{
	setName(other.m_name);
	setEmployNum(other.m_employNum);
	setExp(other.m_exp);
}
//--------------------------------------------------------------------------------//
Nurse::Nurse(Nurse&& other) 
{
	m_name = other.m_name; 
	setEmployNum(other.m_employNum); 
	setExp(other.m_exp); 
	other.m_name = nullptr; 
	
}
//--------------------------------------------------------------------------------//
Nurse::~Nurse()
{
	delete[] m_name;
}
//--------------------------------------------------------------------------------//
void Nurse::setName(const char* name)
{
	delete[] m_name;
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
}
//--------------------------------------------------------------------------------//
void Nurse::setEmployNum(int employNum)
{
	m_employNum = employNum;
}
//--------------------------------------------------------------------------------//
void Nurse::setExp(int exp)
{
	m_exp = exp;
}
//--------------------------------------------------------------------------------//
void Nurse::print() const
{
	cout << "name: " << m_name << "\nemploy number: " << m_employNum << "\nexprience: " << m_exp << "\n";
}
//--------------------------------------------------------------------------------//