/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Choosy.h
 * Author: vips
 *
 * Created on 26 March, 2017, 12:01 PM
 */

#ifndef CHOOSY_H
#define CHOOSY_H
#include<bits/stdc++.h>
using namespace std;
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




class Choosy:public Girl {
public:
   /*!
 * Default constructor
 */ Choosy();
/*!
 * parameterized constructor
 */   Choosy(string s,int a,int i,int b);
 /*!
 * Calculate Happiness of Choosy Girl
 */ int Happiness(vector<Gift*>&v);
    Choosy(const Choosy& orig);
   /*!
 * Default Destructor
 */ virtual ~Choosy();
private:

};

#endif /* CHOOSY_H */

