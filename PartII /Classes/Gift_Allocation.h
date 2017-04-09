/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gift_Allocation.h
 * Author: vips
 *
 * Created on 8 April, 2017, 6:44 PM
 */

#ifndef GIFT_ALLOCATION_H
#define GIFT_ALLOCATION_H
#include"Boy.h"
#include"Couples.h"
#include"Girl.h"
#include"Normal.h"
#include"Choosy.h"
#include"Desperate.h"
#include"Miser.h"
#include"Geeks.h"
#include"Generous.h"


#include <exception>
#include"Luxury.h"
#include"Utility.h"
#include"Essential.h"


class Gift_Allocation {
public:
   /**
 							* Default Constructer
 							* Base Class
 							*/ Gift_Allocation(){};
   
    /**
 							* Virtual Method
 							* Overriden Method
 							*/virtual void allocate_gift(vector<Couples*>&c,vector<Gift*>&g){};
 
    /**
 							* Default Destructer
 							* Base Class
 							*/   virtual ~Gift_Allocation(){};
private:

};

#endif /* GIFT_ALLOCATION_H */

