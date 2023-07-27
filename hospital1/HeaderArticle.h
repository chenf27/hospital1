#pragma once

#include <iostream>
#include <string.h>
using namespace std;

#pragma warning(disable: 4996)

class Article
{

public:
	Article(const char* name, int age, int exp);
	Article(const Article&);//= delete // OR: declare in the private
	Article(Article&&);// = delete
	~Article();

public:
	inline void setName(const char* name);
	inline void setAge(int age);
	inline void setExp(int exp);

	inline const char* getMagazineName() const { return m_magazineName; }
	inline const char* getArticleName() const { return m_articleName; }
	inline int getAge() const { return m_employNum; }

	void print() const;

private:
	char* m_date;
	char*	m_magazineName;
	char*	m_articleName;
};