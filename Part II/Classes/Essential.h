/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Essential.h
 * Author: vips
 *
 * Created on 27 March, 2017, 10:37 AM
 */

#ifndef ESSENTIAL_H
#define ESSENTIAL_H
#include"Gift.h"
using namespace std;
class Essential:public Gift {
public:
/*!
 * Default constructor
 */    Essential();
  
    /*!
 * Paramterized constructor
 */  Essential(int c,int v,string gi);
    Essential(const Essential& orig);
 
    /*!
 * Default Destructor
 */   virtual ~Essential();
private:

};

#endif /* ESSENTIAL_H */

