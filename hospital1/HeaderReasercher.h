#pragma once

#include "HeaderArticle.h"

class Resercher
{
public:
	Resercher(int maxSurvivors);
	Resercher(const Resercher&);// = delete
	Resercher(Resercher&&);// = delete
	~Resercher();

public:
	bool addArticle(Article& newArticle);

	inline Article** getAllArticles();
	inline int getMaxArticles() const { return m_maxArticles; }
	inline int getCurrentNumOfArticles() const;
	inline void setName(const char* name);
	inline int getEmployNum() const { return m_employNum; }


	void print() const;
	void removeArticle(const char* name);

private:

	Article** m_allm_maxArticles;
	int m_maxArticles;
	char* m_name;
	int	m_employNum;

};