/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Linear_search.h
 * Author: vips
 *
 * Created on 7 April, 2017, 10:07 PM
 */

#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H
#include"Couples.h"
#include"Algorithm_Find.h"
using namespace std;
class Linear_search :public Algorithm_Find {
public:
   /*!
 * Default constructor
 */ Linear_search();
/*!
 * Function to Find Girlfriend Of Given Boys
 Algo :: Linear Search
 */     void find(vector<Couples*>&c);

  
     /*!
 * Default Destructor
 */  virtual ~Linear_search();
private:

};

#endif /* LINEAR_SEARCH_H */

