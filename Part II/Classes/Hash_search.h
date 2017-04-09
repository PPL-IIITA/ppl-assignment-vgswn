/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hash_search.h
 * Author: vips
 *
 * Created on 7 April, 2017, 10:07 PM
 */

#ifndef HASH_SEARCH_H
#define HASH_SEARCH_H
#include"Couples.h"
#include"Algorithm_Find.h"
using namespace std;
class Hash_search :public Algorithm_Find {
public:
  /*!
 * Default constructor
 */  Hash_search();
    /*!
 * Find GirlFriend Of Boys 
 Algo Used : HashMap
 */ void find(vector<Couples*>&c);
 
   /*!
 * Default Destructor
 */ virtual ~Hash_search();
private:

};

#endif /* HASH_SEARCH_H */

