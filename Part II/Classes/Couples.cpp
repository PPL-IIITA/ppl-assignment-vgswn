/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Couples.cpp
 * Author: vips_g
 * 
 * Created on 23 February, 2017, 6:27 AM
 */

#include "Couples.h"
#include<bits/stdc++.h>
using namespace std ;

Couples::Couples() {
}

Couples::Couples(Boy *b,Girl *g)
    {
        couple_id=b->boy_id+"_"+g->girl_id;
        bob=b;
        gob=g;
        happiness=0;
        compatibility=0;
    }

Couples::~Couples() {
}

