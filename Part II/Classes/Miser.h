/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Miser.h
 * Author: vips
 *
 * Created on 26 March, 2017, 11:58 AM
 */

#ifndef MISER_H
#define MISER_H
#include"Boy.h"
#include"Couples.h"
#include"Girl.h"
#include"Normal.h"
#include"Choosy.h"
#include"Desperate.h"
#include"Miser.h"
#include"Geeks.h"
#include"Generous.h"
#include"Gift.h"
#include<bits/stdc++.h>
using namespace std ;

class Miser:public Boy {
public:
    /*!
 * Default constructor
 */Miser();
    /*!
 * parameterized constructor
 */Miser(string s,int a,int i,int b);
    /*!
 * Calculate Happiness of Miser Boy
 */int Happiness(vector<Gift*>&v,Girl* g);
    Miser(const Miser& orig);
    /*!
 * Default Destructor
 */virtual ~Miser();
private:

};

#endif /* MISER_H */

