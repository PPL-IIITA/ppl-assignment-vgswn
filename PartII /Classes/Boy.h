/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boy.h
 * Author: vips_g
 *
 * Created on 23 February, 2017, 6:18 AM
 */

#ifndef BOY_H
#define BOY_H
#include<bits/stdc++.h>
#include"Gift.h"
#include"Girl.h"

using namespace std ;


class Boy {
public:
   
    /*!
 * Default Constructor
 */ Boy(void){};

    /*!
 * parameterized constructor
 */Boy(string s,int a,int i,int b){};
  
    string boy_id;/*!< Boy Id  */
    int attractiveness; /*!< Attractiveness of Boy */
    int intelligence; /*!< Inteligence of Boy*/
    bool comm_or_not;/*!< Boolean : Commited or Not */
    int budget; /*!< Budget of Boy*/
    int happiness;/*!< Happiness of Boy */
   
     
     /*!
 * Virtual Function
 	Overriden Function
 	Calculate Happiness  of Boy
 */virtual int Happiness(vector<Gift*> & v,Girl* g)
     {
     	
     };
    
    /*!
 * Default Destructor
 */virtual ~Boy()
    {
    };
private:

};

#endif /* BOY_H */

