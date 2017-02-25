/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boy.cpp
 * Author: vips_g
 * 
 * Created on 23 February, 2017, 6:18 AM
 */

#include "Boy.h"
#include<bits/stdc++.h>
using namespace std ;

Boy::Boy() {
}
Boy::Boy(string s,int a,int i,int b,string t)
    {
        boy_id=s;
        attractiveness=a;
        intelligence=i;
        budget=b;
        type=t;
        comm_or_not=false;
        happiness=0;
    }
 

Boy::~Boy() {
}

