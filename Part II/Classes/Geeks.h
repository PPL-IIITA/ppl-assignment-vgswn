/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Geeks.h
 * Author: vips
 *
 * Created on 26 March, 2017, 12:00 PM
 */

#ifndef GEEKS_H
#define GEEKS_H
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


class Geeks:public Boy {
public:
    /*!
 * Default constructor
 */Geeks();
   /*!
 * Calculate Happiness of Geek Boy
 */int Happiness(vector<Gift*>&v,Girl* g);
    /*!
 * parameterized constructor
 */Geeks(string s,int a,int i,int b) ;
    
  /*!
 * Default Destructor
 */  virtual ~Geeks();
private:

};

#endif /* GEEKS_H */

