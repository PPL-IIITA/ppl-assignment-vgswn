/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Luxury.h
 * Author: vips
 *
 * Created on 27 March, 2017, 10:38 AM
 */

#ifndef LUXURY_H
#define LUXURY_H
#include"Gift.h"
using namespace std;
class Luxury:public Gift {
public:
  /*!
 * Default constructor
 */  Luxury();
 /*!
 * parameterized constructor
 */   Luxury(int c,int v,string gi);
    Luxury(const Luxury& orig);
  /*!
 * Default Destructor
 */  virtual ~Luxury();
private:

};

#endif /* LUXURY_H */

