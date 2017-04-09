/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Girl.h
 * Author: vips_g
 *
 * Created on 23 February, 2017, 6:26 AM
 */

#ifndef GIRL_H
#define GIRL_H

#include<bits/stdc++.h>

using namespace std ;
#include"Gift.h"

class Girl {
public:
    /*!
 * Default Constructor
 */Girl(void){};
    /*!
 * parameterized constructor
 */Girl(string s,int a,int i,int b){};
   
    string girl_id;/*!< Girl Id */
    int attractiveness;/*!< Attactiveness of Girl */
    int intelligence;/*!< Inteligence Of Girl */
    bool comm_or_not;/*!< Boolean : Commited or Not  */
    int maintenance_cost;/*!< Maintainance Cost */

    int happiness;/*!< Happiness of Girl */
    
/*!
 * Virtual Function
 Overridden Function
 Calculate Happiness of Girl
 */virtual int Happiness(vector<Gift*>&v)
{
	
};

/*!
 * Default Destructor
 */
     virtual ~Girl(void){};


private:

};

#endif /* GIRL_H */

