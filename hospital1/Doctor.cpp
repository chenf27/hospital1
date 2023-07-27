#include "HeaderDoctor.h"

//--------------------------------------------------------------------------------//
Doctor::Doctor(const char* name, int age, eInternship status)
	: m_name(nullptr)// required just for versions before C++11
{
	cout << "In Survivor's c'tor for " << name << endl;
	setName(name);
	setAge(age);
	setStatus(status);
}
//--------------------------------------------------------------------------------//
Doctor:: Doctor(const Doctor& other)
	: m_name(nullptr)// required just for versions before C++11
{
	cout << "In Survivor copy c'tor for " << other.m_name << endl;
	setName(other.m_name);
	setAge(other.m_employNum);
	setStatus(other.m_status);
}
//--------------------------------------------------------------------------------//
Doctor::Doctor(Doctor&& other)
	: m_name(nullptr)// required just for versions before C++11
{
	cout << "In Survivor move c'tor for " << other.m_name << endl;

	m_name = other.m_name;
	setAge(other.m_employNum);
	setStatus(other.m_status);
	other.m_name = nullptr;
}
//--------------------------------------------------------------------------------//
Doctor::~Doctor()
{
	cout << "In Survivor d'tor for " << m_name << endl;
	delete[] m_name;
}
//--------------------------------------------------------------------------------//
void Doctor::setName(const char* name)
{
	delete[] m_name;
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
}
//--------------------------------------------------------------------------------//
void Doctor::setAge(int age)
{
	m_employNum = age;
}
//--------------------------------------------------------------------------------//
void Doctor::setStatus(Doctor::eInternship status)
{
	m_status = status;
}
//--------------------------------------------------------------------------------//
void Doctor::print() const
{
	cout << "name: " << m_name << "\nage: " << m_employNum << "\nstatus: " << familyStatusStr[(int)m_status] << "\n";
}
//--------------------------------------------------------------------------------//