#pragma once


#include <iostream>
#include <string.h>
using namespace std;

#pragma warning(disable: 4996)

class VisitCard
{

public:
	VisitCard(const char* name, int age, int exp);
	VisitCard(const VisitCard&);//= delete // OR: declare in the private
	VisitCard(VisitCard&&);// = delete
	~VisitCard();

public:
	inline void setName(const char* name);
	inline void setId(int id);
	inline void setBirthYear(int birthYear);

	inline const char* getName() const { return m_name; }
	inline int getId() const { return m_id; }
	inline int getBirthYear() const { return m_birthYear; }

	void print() const;

private:
	char* m_name;
	int	m_id;
	int	m_birthYear;
	//gender
};