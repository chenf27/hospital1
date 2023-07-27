#pragma once

#include <iostream>
#include <string.h>
using namespace std;

#pragma warning(disable: 4996)

class Hospital
{
public:
	enum class eFamilyStatus { SINGLE, MARRIED, IN_A_RELATIONSHIP };
	static constexpr const char* familyStatusStr[] = { "Single", "Married", "In_A_Relationship" };

public:
	Survivor(const char* name, int age, eFamilyStatus status);
	Survivor(const Survivor&);//= delete // OR: declare in the private
	Survivor(Survivor&&);// = delete
	~Survivor();

public:
	inline void setName(const char* name);
	inline void setAge(int age);
	inline void setStatus(eFamilyStatus status);

	inline const char* getName() const { return m_name; }
	inline int getAge() const { return m_age; }
	inline eFamilyStatus getStatus() const { return m_status; }

	void print() const;

private:
	char* m_name;
	int				m_age;
	eFamilyStatus	m_status;
};
