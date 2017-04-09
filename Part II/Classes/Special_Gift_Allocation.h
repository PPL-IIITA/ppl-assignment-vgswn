/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Special_Gift_Allocation.h
 * Author: vips
 *
 * Created on 8 April, 2017, 6:44 PM
 */

#ifndef SPECIAL_GIFT_ALLOCATION_H
#define SPECIAL_GIFT_ALLOCATION_H
#include"Gift_Allocation.h"
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
using namespace std;

class Special_Gift_Allocation:public Gift_Allocation {
public:
   /**
 							* Default Constructer
 							*/  Special_Gift_Allocation();
/**
 							* Special Gift Allocation Inherited to Gift Allocation
 							*/    void allocate_gift(vector<Couples*>&c,vector<Gift*>&g);
    Special_Gift_Allocation(const Special_Gift_Allocation& orig);
  /**
 							* Default Destructer
 							*/  virtual ~Special_Gift_Allocation();
private:

};

#endif /* SPECIAL_GIFT_ALLOCATION_H */

