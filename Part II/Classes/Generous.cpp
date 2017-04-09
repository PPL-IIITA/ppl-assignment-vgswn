/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Generous.cpp
 * Author: vips
 * 
 * Created on 26 March, 2017, 11:59 AM
 */

#include "Generous.h"
#include<bits/stdc++.h>
using namespace std;

Generous::Generous() {
}

Generous::Generous(string s,int a,int i,int b) {
    
    	// cout<<"here poly"<<endl;
        boy_id=s;
        attractiveness=a;
        intelligence=i;
        budget=b;
        
        comm_or_not=false;
        happiness=0;
    }
int Generous::Happiness(vector<Gift*>&v,Girl* g)
{
	return g->happiness;


}

Generous::~Generous() {
}

