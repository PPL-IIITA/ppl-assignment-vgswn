/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q3.h
 * Author: vips_g
 *
 * Created on 25 February, 2017, 4:15 PM
 */

#ifndef q3_H
#define q3_H
    #include<bits/stdc++.h>
    #include"../Classes/Boy.h"
#include"../Classes/Couples.h"
#include"../Classes/Girl.h"
#include"../Classes/Normal.h"
#include"../Classes/Choosy.h"
#include"../Classes/Desperate.h"
#include"../Classes/Miser.h"
#include"../Classes/Geeks.h"
#include"../Classes/Generous.h"
#include"../Classes/random_generate.h"
#include"../Classes/Couples.h"
#include <exception>
#include"../Classes/Luxury.h"
#include"../Classes/Utility.h"
#include"../Classes/Essential.h"
#include"../Classes/Algorithm.h"
#include"../Classes/Sorting.h"
    #include"q3.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"



class q3 {
public:
    /*!
 * Default Constructor
 */
    q3();
    void x();/*!
 * Read Input i.e Details of Boy/Girl from file
 */

    void read();

   /*!
 * Make Couple Girl Chooses Boy
 */
    void makecouples(vector<Boy*>&b,vector<Girl*>&g,vector<Couples*>&c);/*!
 * Output Couple Names
 */
    void out();/*!
 * Output Happines Sorted Couples
 */
	void out1();
	/*!
 * Output Compatibilty Sorted Couples
 */
	void out2();

   /*!
 * Distribution of Gift
 */
	void gift_distribute();

    /*!
 * Read Gifts i.e Details of Gifts from file
 */
   void read_gift();

   /*!
 * Calculation of Happiness and Compatibility
 */
void calculation();
  vector<Boy*>boy_arr;/**< Arrays Of object Boy*/

    vector<Girl*> girl_arr;/**< Arrays Of object Girl*/
    vector<Couples*> couple_arr;/**< Arrays Of object Couples*/
vector<Gift*>gift_arr;/**< Arrays Of object Gift*/
    q3(const q3& orig); /*!
 * Default Destructor
 */
    virtual ~q3();
private:

};

#endif /* q3_H */
