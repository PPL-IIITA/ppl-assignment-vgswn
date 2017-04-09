/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Binary_search.h
 * Author: vips
 *
 * Created on 7 April, 2017, 10:07 PM
 */

#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H
#include"Couples.h"
#include"Algorithm_Find.h"
using namespace std;

class Binary_search :public Algorithm_Find{
public:
  /*!
 * Default constructor
 */  
	Binary_search();
    /*!
 * Function to Find Girlfriend Of Given Boys
 Algo :: Binary Search
 */ 
	void find(vector<Couples*>&c);
     
     /*!
 * Function to serach Girlfriend Using Binary Search
 */
	string search(vector<Couples*>&c,string s,int st,int end);

     
  
    /*!
 * Default Destructor
 */  virtual ~Binary_search();
private:

};

#endif /* BINARY_SEARCH_H */

