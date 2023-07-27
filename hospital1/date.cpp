#include "HeaderVisitCard.h"

//--------------------------------------------------------------------------------//
VisitCard::VisitCard(const char* name, int id, int birthYear)
{
	setName(name);
	setId(id);
	setBirthYear(birthYear);
}
//--------------------------------------------------------------------------------//
VisitCard::VisitCard(const VisitCard& other)
{
	setName(other.m_name);
	setId(other.m_id);
	setBirthYear(other.m_birthYear);
}
//--------------------------------------------------------------------------------//
VisitCard::VisitCard(VisitCard&& other)
{
	m_name = other.m_name;
	setId(other.m_id);
	setBirthYear(other.m_birthYear);
	other.m_name = nullptr;

}
//--------------------------------------------------------------------------------//
VisitCard::~VisitCard()
{
	delete[] m_name;
}
//--------------------------------------------------------------------------------//
void VisitCard::setName(const char* name)
{
	delete[] m_name;
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
}
//--------------------------------------------------------------------------------//
void VisitCard::setId(int id)
{
	m_id = id;
}
//--------------------------------------------------------------------------------//
void VisitCard::setBirthYear(int birthYear)
{
	m_birthYear = birthYear;
}
//--------------------------------------------------------------------------------//
void VisitCard::print() const
{
	cout << "name: " << m_name << "\nemploy number: " << m_employNum << "\nexprience: " << m_exp << "\n";
}
//--------------------------------------------------------------------------------//