/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Utility.cpp
 * Author: vips
 * 
 * Created on 27 March, 2017, 10:38 AM
 */

#include "Utility.h"
using namespace std;
Utility::Utility() {
}
Utility::Utility(int c,int v,string gi)
    {
       
        cost=c;
        value=v;
        gift_id=gi;
    }
Utility::Utility(const Utility& orig) {
}

Utility::~Utility() {
}

