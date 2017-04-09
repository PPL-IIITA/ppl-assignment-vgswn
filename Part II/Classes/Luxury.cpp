/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Luxury.cpp
 * Author: vips
 * 
 * Created on 27 March, 2017, 10:38 AM
 */

#include "Luxury.h"
using namespace std;
Luxury::Luxury() {
}
Luxury::Luxury(int c,int v,string gi)
    {
        
        cost=c;
        value=v;
        gift_id=gi;
    }
Luxury::Luxury(const Luxury& orig) {
}

Luxury::~Luxury() {
}

