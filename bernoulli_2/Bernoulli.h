//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Bernoulli.h
//  @ Date : 19.03.2018
//  @ Author : 
//
//


#if !defined(_BERNOULLI_H)
#define _BERNOULLI_H

#include "Power.h"
#include "Newton.h"

class Bernoulli {
public:
	void bernoulli(double p, int n, int k);
	Bernoulli();
	~Bernoulli();
private:
	double q;
	long double p;
	Power pPower;
	Newton pNewton;
};

#endif  //_BERNOULLI_H
