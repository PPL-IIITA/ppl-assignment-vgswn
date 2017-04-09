/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q4.h
 * Author: vips_g
 *
 * Created on 25 February, 2017, 4:15 PM
 */

#ifndef q4_H
#define q4_H
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
    #include"q4.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"



class q4 {
public:
     /*!
 * Default Constructor
 */
    q4();
    
    void x();/*!
 * Read Input i.e Details of Boy/Girl from file
 */
    void read();/*!
 * Make Couple Girl Chooses Boy
 */
    void makecouples();/*!
 * Output Couple Names
 */
    void output_couples(ofstream& out);/*!
 * Output Happines Sorted Couples
 */
	void output_happiness(ofstream& out);/*!
 * Output Compatibilty Sorted Couples
 */
	void output_compatibility(ofstream& out);
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
map<string,string>strMap;
  vector<Boy*>boy_arr;/**< Arrays Of object Boy*/
    vector<Girl*> girl_arr;/**< Arrays Of object Girl*/
    vector<Couples*> couple_arr;/**< Arrays Of object Couples*/
vector<Gift*>gift_arr;/**< Arrays Of object Gift*/
void Break_up();/*!
 * Perform Breakup
 */
    q4(const q4& orig);/*!
 * Default Destructor
 */
    virtual ~q4();
private:

};

#endif /* q4_H */
