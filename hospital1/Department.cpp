#include "HeaderDepartment.h"
//--------------------------------------------------------------------------------//
Department::Department(int maxNurses = 0, int maxDoctors = 0)
{
	m_allNurses = new Nurse * [m_maxNurses];
	m_allDoctors = new Doctor * [m_maxDoctors];

}
//--------------------------------------------------------------------------------//
Department::Department(const Department& other)
	: m_currentNumOfSurvivors(other.m_currentNumOfSurvivors),
	m_maxSurvivors(other.m_maxSurvivors)
{
	m_allSurvivors = new Survivor * [m_maxSurvivors];
	for (int i = 0; i < m_currentNumOfSurvivors; i++)
		m_allSurvivors[i] = new Survivor(*(other.m_allSurvivors[i]));//copy c'tor of survivor
}
//--------------------------------------------------------------------------------//
Department::Department(Tribe&& other)
	: m_currentNumOfSurvivors(other.m_currentNumOfSurvivors),
	m_maxSurvivors(other.m_maxSurvivors)
{
	m_allSurvivors = other.m_allSurvivors;

	other.m_allSurvivors = nullptr;
	other.m_currentNumOfSurvivors = 0;//to avoid crash on delete (we run on the m_currentNumOfSurvivors and delete the array)
}
//--------------------------------------------------------------------------------//
Department::~Department()
{
	cout << "In Tribe d'tor for _currentNumOfSurvivors=" << m_currentNumOfSurvivors << endl;

	for (int i = 0; i < m_currentNumOfSurvivors; i++)
		delete m_allSurvivors[i];

	delete[] m_allSurvivors;
}
//--------------------------------------------------------------------------------//
bool Department::addSurvivor(Survivor& newSurvivor)
{
	if (m_currentNumOfSurvivors < m_maxSurvivors)
	{
		m_allSurvivors[m_currentNumOfSurvivors++] = &newSurvivor;
		return true;
	}
	else
		return false;
}
//--------------------------------------------------------------------------------//
Survivor** Department::getAllSurvivors()
{
	return m_allSurvivors;
}
//--------------------------------------------------------------------------------//
int Department::getCurrentNumOfSurvivors() const
{
	return m_currentNumOfSurvivors;
}
//--------------------------------------------------------------------------------//
void Department::print() const
{
	for (int i = 0; i < m_currentNumOfSurvivors; i++)
		m_allSurvivors[i]->print();
}
//----------------------------------------------------------------------------------------//
