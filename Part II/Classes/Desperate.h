/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Desperate.h
 * Author: vips
 *
 * Created on 26 March, 2017, 12:01 PM
 */

#ifndef DESPERATE_H
#define DESPERATE_H
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


class Desperate:public Girl {
public:
   /*!
 * Default constructor
 */ Desperate();
   
    /*!
 * Paramterized constructor
 */ Desperate(string s,int a,int i,int b);

    /*!
 * Caculate happiness of Desperate Girl
 */    int Happiness(vector<Gift*>&v);
    Desperate(const Desperate& orig);
 
    /*!
 * Paramterized constructor
 */   virtual ~Desperate();
private:

};

#endif /* DESPERATE_H */

