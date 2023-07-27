#pragma once

#include "HeaderDepartment.h"
#include "HeaderResearch.h"



class Hospital
{
public:
	Hospital(int maxNurses, int maxDoctors);
	Hospital(const Department&);// = delete
	Hospital(Hospital&&);// = delete
	~Hospital();

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
	Hospital** m_Departments;
	int	m_DepaetmentsSize;

	Research m_Research;

};