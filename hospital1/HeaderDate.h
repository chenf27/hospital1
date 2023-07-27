#pragma once

#include <iostream>
#include <string.h>
using namespace std;

#pragma warning(disable: 4996)

class Date
{
public:
	Date(int day, int month,int year);
	Date(const Date&);// = delete
	Date(Date&&);// = delete
	~Date();

public:


	void print() const;

private:
	int	m_year;
	int	m_month;
	int m_day

};