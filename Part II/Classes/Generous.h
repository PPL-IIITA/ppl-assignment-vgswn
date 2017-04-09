/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Generous.h
 * Author: vips
 *
 * Created on 26 March, 2017, 11:59 AM
 */

#ifndef GENEROUS_H
#define GENEROUS_H
#include<bits/stdc++.h>

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


using namespace std;

class Generous : public Boy
{
public:
  /*!
 * Default constructor
 */  Generous();
   /*!
 * parameterized constructor
 */ Generous(string s,int a,int i,int b);
     /*!
 * Calculate Happiness of Generous Boy
 */int Happiness(vector<Gift*>&v,Girl* g);
  
    /*!
 * Default Destructor
 */  virtual ~Generous();
private:

};

#endif /* GENEROUS_H */

