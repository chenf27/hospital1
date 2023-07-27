#pragma once
//checkkkkkkkkk

#include <iostream>
#include <string.h>
using namespace std;

#pragma warning(disable: 4996)

class Nurse
{

public:
	Nurse(const char* name, int age, int exp);
	Nurse(const Nurse&);//= delete // OR: declare in the private
	Nurse(Nurse&&);// = delete
	~Nurse();

public:
	inline void setName(const char* name);
	inline void setEmployNum(int employNum);
	inline void setExp(int exp);

	inline const char* getName() const { return m_name; }
	inline int getEmployNum() const { return m_employNum; }
	inline int getExp() const { return m_exp; }

	void print() const;

private:
	char* m_name;
	int	m_employNum;
	int	m_exp;
};