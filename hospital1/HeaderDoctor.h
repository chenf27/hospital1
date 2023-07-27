#pragma once

#include <iostream>
#include <string.h>
using namespace std;

#pragma warning(disable: 4996)

class Doctor
{
public:
	enum class eInternship { A,B,C };
	static constexpr const char* familyStatusStr[] = { "Single", "Married", "In_A_Relationship" };

public:
	Doctor(const char* name, int age, eInternship status);
	Doctor(const Doctor&);//= delete // OR: declare in the private
	Doctor(Doctor&&);// = delete
	~Doctor();

public:
	inline void setName(const char* name);
	inline void setAge(int age);
	inline void setStatus(eInternship status);

	inline const char* getName() const { return m_name; }
	inline int getAge() const { return m_employNum; }
	inline eInternship getStatus() const { return m_status; }

	void print() const;

private:
	char* m_name;
	int			m_employNum;
	eInternship	m_status;
};