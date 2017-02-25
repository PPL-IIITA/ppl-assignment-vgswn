/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gift.cpp
 * Author: vips_g
 * 
 * Created on 23 February, 2017, 6:42 AM
 */

#include "Gift.h"
#include<bits/stdc++.h>
using namespace std ;

Gift::Gift() {
}

Gift::Gift(string t,int c,int v,string gi)
    {
        type=t;
        cost=c;
        value=v;
        gift_id=gi;
    }

Gift::~Gift() {
}

