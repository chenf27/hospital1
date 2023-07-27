#pragma once

#include "HeaderNurse.h"
#include "HeaderDoctor.h"


class Date
{
public:
	Date(int maxNurses, int maxDoctors);
	Date(const Date&);// = delete
	Date(Date&&);// = delete
	~Date();

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

};