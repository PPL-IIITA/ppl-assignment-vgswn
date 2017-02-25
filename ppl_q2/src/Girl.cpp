/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Girl.cpp
 * Author: vips_g
 * 
 * Created on 23 February, 2017, 6:26 AM
 */

#include "Girl.h"
#include<bits/stdc++.h>
using namespace std ;

Girl::Girl() {
}
Girl::Girl(string s,int a,int i,int b,string t)
    {
        girl_id=s;
        attractiveness=a;
        intelligence=i;
        maintenance_cost=b;
        type=t;
        comm_or_not=false;
        happiness=0;
    }
Girl::~Girl(){
}

