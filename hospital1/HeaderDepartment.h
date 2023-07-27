#pragma once

#include "HeaderNurse.h"
#include "HeaderDoctor.h"
#include "HeaderPatient.h"


class Department
{
public:
	Department(int maxNurses, int maxDoctors);
	Department(const Department&);// = delete
	Department(Department&&);// = delete
	~Department();

public:
	bool addNurse(Nurse& newNurse);
	bool addDoctor(Nurse& newDOctor);


	inline Nurse** getAllNurses();
	inline int getMaxNurses() const { return m_maxNurses; }
	inline int getCurrentNumOfNurses() const;

	inline Nurse** getAllDoctors();
	inline int getMaxDoctors() const { return m_maxDoctors; }
	inline int getCurrentNumOfDoctor() const;


	void print() const;

private:
	Nurse** m_allNurses;
	int	m_maxNurses;
	int	m_currentNumOfNurses;

	Doctor** m_allDoctors;
	int	m_maxDoctors;
	int	m_currentNumOfDoctor;

	Patient** m_allPatients;

};