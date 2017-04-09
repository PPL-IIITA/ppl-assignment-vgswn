/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Normal.h
 * Author: vips
 *
 * Created on 26 March, 2017, 12:01 PM
 */

#ifndef NORMAL_H
#define NORMAL_H
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


class Normal:public Girl {
public:
  /*!
 * Defaut constructor
 */  Normal();
    /*!
 * parameterized constructor
 */Normal(string s,int a,int i,int b);


   /*!
 * Calculate Happiness of Normal Girl
 */   int Happiness(vector<Gift*>&v);
    Normal(const Normal& orig);
   /*!
 * Default Destructor
 */ virtual ~Normal();
private:

};

#endif /* NORMAL_H */

