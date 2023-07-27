#pragma once

#include "HeaderVisitCard.h"
#include "HeaderDate.h"
#include "HeaderDoctor.h"



class Patient
{

public:
	Patient(VisitCard card, Date today, Doctor doc);
	Patient(const VisitCard&);//= delete // OR: declare in the private
	Patient(Patient&&);// = delete
	~Patient();

public:
	




	void print() const;

private:
	VisitCard m_card;
	Date m_date;
	Doctor m_doc;
	//sibat bikoor

};