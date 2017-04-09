/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q5.h
 * Author: vips_g
 *
 * Created on 25 February, 2017, 4:15 PM
 */

#ifndef q5_H
#define q5_H
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
    #include"q5.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"
using namespace std;


class q5 {
public:
     /*!
 * Default Constructor
 */
    q5();
   
    void x();/*!
 * Read Input i.e Details of Boy/Girl from file
 */
    void read();
   
 	  
/*!
 * Output Couple Names
 */
    void out();
    /*!
 * Output Happines Sorted Couples
 */
	void out1();
    /*!
 * Output Compatibilty Sorted Couples
 */
	void out2();/*!
 * Distribution of Gift
 */
	void gift_distribute();/*!
 * Read Gifts i.e Details of Gifts from file
 */
   void read_gift();/*!
 * Calculation of Happiness and Compatibility
 */
void calculation();
  vector<Boy*>boy_arr;/**< Arrays Of object Boy*/
    vector<Girl*> girl_arr;/**< Arrays Of object Girl*/
    vector<Couples*> couple_arr;/**< Arrays Of object Couples*/
vector<Gift*>gift_arr;/**< Arrays Of object Gifts*/
 map<string,string>boy_girl;/**< Ex-Gf HashMap :: Boy name to Girl name */
    map<string,string>girl_boy;/**< Ex-Gf HashMap :: Girl name to Boy name */
    map<string,string>cur_gf;/**< Current Gf HashMap :: Boy name to Girl name */

    q5(const q5& orig);/*!
 * Default Destructor
 */
    virtual ~q5();
private:

};

#endif /* q5_H */
