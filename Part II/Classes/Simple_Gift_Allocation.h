/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Simple_Gift_Allocation.h
 * Author: vips
 *
 * Created on 8 April, 2017, 6:44 PM
 */

#ifndef SIMPLE_GIFT_ALLOCATION_H
#define SIMPLE_GIFT_ALLOCATION_H
#include"Gift_Allocation.h"
#include"Boy.h"
#include"Couples.h"
#include"Girl.h"
#include"Normal.h"
#include"Choosy.h"
#include"Desperate.h"
#include"Miser.h"
#include"Geeks.h"
#include"Generous.h"
#include"Gift.h"

#include <exception>
#include"Luxury.h"
#include"Utility.h"
#include"Essential.h"
using namespace std;

class Simple_Gift_Allocation:public Gift_Allocation {
public:
   /**
 							* Default Constructer
 							*/ Simple_Gift_Allocation();
  /**
 							* Normal Allocate Gift Method Inherited to Gift_Allocation Class
 							*/  void allocate_gift(vector<Couples*>&c,vector<Gift*>&g);
    Simple_Gift_Allocation(const Simple_Gift_Allocation& orig);
/**
 							* Default Destructer
 							*/    virtual ~Simple_Gift_Allocation();
private:

};

#endif /* SIMPLE_GIFT_ALLOCATION_H */

