/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Couples.h
 * Author: vips_g
 *
 * Created on 23 February, 2017, 6:27 AM
 */

#ifndef COUPLES_H
#define COUPLES_H
#include"Boy.h"
#include"Girl.h"
#include"Gift.h"
#include<bits/stdc++.h>
using namespace std ;

class Couples {
public:
    /*!
 * Default constructor
 */Couples();
    /*!
 * parameterized constructor
 */Couples(Boy* b,Girl* g);
     string couple_id; /*!< Couple Id */
    Boy *bob; /*!< Obeject Boy */
    int compatibility; /*!< Compatibility Of Couple */
    int happiness;/*!< Happiness of Couple */
    Girl *gob;/*!< Object Girl  */
    vector<Gift*>gift_arr; /*!< Array Of Gift Associated with Couple */
    
   
    /*!
 * Default Destructor
 */ virtual ~Couples();
private:

};

#endif /* COUPLES_H */

