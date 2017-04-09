/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Essential.cpp
 * Author: vips
 * 
 * Created on 27 March, 2017, 10:37 AM
 */

#include "Essential.h"
using namespace std;
Essential::Essential() {
}
Essential::Essential(int c,int v,string gi)
    {
        
        cost=c;
        value=v;
        gift_id=gi;
    }
Essential::Essential(const Essential& orig) {
}

Essential::~Essential() {
}

