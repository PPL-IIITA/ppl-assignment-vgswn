/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Geeks.cpp
 * Author: vips
 * 
 * Created on 26 March, 2017, 12:00 PM
 */

#include "Geeks.h"
#include<bits/stdc++.h>

using namespace std;

Geeks::Geeks(string s,int a,int i,int b) {
    
    
        boy_id=s;
        attractiveness=a;
        intelligence=i;
        budget=b;
        
        comm_or_not=false;
        happiness=0;
    }
int Geeks::Happiness(vector<Gift*>&v,Girl* g)
{
	return g->intelligence;

}

Geeks::Geeks() {
}
Geeks::~Geeks() {
}

