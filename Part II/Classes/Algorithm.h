/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Algorithm.h
 * Author: vips
 *
 * Created on 27 March, 2017, 11:28 PM
 */

#ifndef ALGORITHM_H
#define ALGORITHM_H

#include"Boy.h"
#include"Girl.h"
#include"Couples.h"
#include<bits/stdc++.h>
using namespace std;
class Algorithm {
public:
  /*!
 * Default constructor
 */  Algorithm();
/*!
 *Method To Match Couples..
 Algo used :: Girl Chooses Boy

 */    void algo_pre(vector<Boy*>&boy_arr,vector<Girl*>&girl_arr,std::vector<Couples*>& couple_arr,map<string,string>&boy_girl,map<string,string>&girl_boy,map<string,string>&cur_gf);



   /*!
 * Method To Match Couples..
 Algo used :: Girl Chooses Boy and Boy Chooses Girl Alternatively
 */    void algo_new(vector<Boy*>&boy_arr,vector<Girl*>&girl_arr,std::vector<Couples*>& couple_arr,map<string,string>&boy_girl,map<string,string>&girl_boy,map<string,string>&cur_gf);


    Algorithm(const Algorithm& orig);
  
    /*!
 * Default Destructor
 */  virtual ~Algorithm();
private:

};

#endif /* ALGORITHM_H */

