/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gift.h
 * Author: vips_g
 *
 * Created on 23 February, 2017, 6:42 AM
 */

#ifndef GIFT_H
#define GIFT_H
#include<bits/stdc++.h>
using namespace std ;

class Gift {
public:
	/*!
 * Default Constructor
 */ Gift(void){};
   
	 string type; /*!< Type Of Gift */
    int cost; /*!< Cost Of Gift */
    int value;/*!< Value of Gift */
    string gift_id;/*!< Gift Id */
	
/*!
 * Default Destructor
 */
     virtual ~Gift(void){};
private:
	
   

};

#endif /* GIFT_H */

