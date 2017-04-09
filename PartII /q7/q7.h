/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q7.h
 * Author: vips_g
 *
 * Created on 25 February, 2017, 4:15 PM
 */

#ifndef q7_H
#define q7_H
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
  #include"q7.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"



class q7 {
public:
    q7();
 
    void x();/*!
 * Read Input i.e Details of Boy/Girl from file
 */
    void read();
    
    /*!
 * Distribution of Gift
 */
	void gift_distribute();/*!
 * Read Gifts i.e Details of Gifts from file
 */
   void read_gift();/*!
 * Calculation of Happiness and Compatibility
 */
void calculation();
  vector<Boy*>::iterator iterator_to_boy;/**< Vector Iterator of  Boy*/
    vector<Girl*>::iterator iterator_to_girl;/**< Vector Iterator of  Girl*/
       vector<Boy*>boy_arr;/**< Arrays Of object Boy*/
    vector<Girl*> girl_arr;/**< Arrays Of object Girl*/
    vector<Couples*> couple_arr;/**< Arrays Of object Couples*/
vector<Gift*>gift_arr;/**< Arrays Of object Gifts*/
 map<string,string>boy_girl;/**< Ex-Gf HashMap :: Boy name to Girl name */
    map<string,string>girl_boy;/**< Ex-Gf HashMap :: Girl name to Boy name */
    map<string,string>cur_gf;/**< Current Gf HashMap :: Boy name to Girl name */

/*!
 * Perform Breakup for T- days
 */
void Break_up();
    q7(const q7& orig);
    virtual ~q7();
private:

};

#endif /* q7_H */
