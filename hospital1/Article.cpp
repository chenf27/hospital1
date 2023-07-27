#include "HeaderArticle.h"

//--------------------------------------------------------------------------------//
Article::Article(const char* name, int age, int exp)
	: m_name(nullptr)// required just for versions before C++11
{
	cout << "In Survivor's c'tor for " << name << endl;
	setName(name);
	setAge(age);
	setExp(exp);
}
//--------------------------------------------------------------------------------//
Article::Article(const Article& other)
	: m_name(nullptr)// required just for versions before C++11
{
	cout << "In Survivor copy c'tor for " << other.m_name << endl;
	setName(other.m_name);
	setAge(other.m_employNum);
	setExp(other.m_exp);
}
//--------------------------------------------------------------------------------//
Article::Article(Nurse&& other)
	: m_name(nullptr)// required just for versions before C++11
{
	cout << "In Survivor move c'tor for " << other.m_name << endl;

	m_name = other.m_name;
	setAge(other.m_employNum);
	setExp(other.m_exp);
	other.m_name = nullptr;
}
//--------------------------------------------------------------------------------//
Article::~Article()
{
	cout << "In Survivor d'tor for " << m_name << endl;
	delete[] m_name;
}
//--------------------------------------------------------------------------------//
void Article::setName(const char* name)
{
	delete[] m_name;
	m_name = new char[strlen(name) + 1];
	strcpy(m_name, name);
}
//--------------------------------------------------------------------------------//
void Article::setAge(int age)
{
	m_employNum = age;
}
//--------------------------------------------------------------------------------//
void Article::setExp(int exp)
{
	m_exp = exp;
}
//--------------------------------------------------------------------------------//
void Article::print() const
{
	cout << "name: " << m_name << "\nage: " << m_employNum << "\nstatus: " << m_exp << "\n";
}
//--------------------------------------------------------------------------------//