/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Algorithm_Find.h
 * Author: vips
 *
 * Created on 7 April, 2017, 10:05 PM
 */

#ifndef ALGORITHM_FIND_H
#define ALGORITHM_FIND_H
#include"Couples.h"
using namespace std;
class Algorithm_Find {
public:
    /**
 							* Default Constructer
 							* Base Class to Search Girlfriend Of Given Boy
 							*/Algorithm_Find(){};
   
   
    /**
 							* Virtual Method 
 							* Overridden Method
 							*Used to implement Different Algo For Finding Girlfriend Of Given Boy
 							*/ virtual void find(vector<Couples*>&c){};
    
   
    /**
 							* Default Destructer
 							*/ virtual ~Algorithm_Find(){};
private:

};

#endif /* ALGORITHM_FIND_H */

