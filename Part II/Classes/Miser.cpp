/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Miser.cpp
 * Author: vips
 * 
 * Created on 26 March, 2017, 11:58 AM
 */

#include "Miser.h"
#include<bits/stdc++.h>
using namespace std;
Miser::Miser(){}
Miser::Miser(string s,int a,int i,int b) {
    
    
        boy_id=s;
        attractiveness=a;
        intelligence=i;
        budget=b;
        
        comm_or_not=false;
        happiness=0;
    }
int Miser::Happiness(vector<Gift*>&v,Girl* g)
{
	int j;
	int x=0;
	for (j = 0; j < v.size(); j++) {
            x+= v[j]->cost;
        return abs(budget - x);




}
}
Miser::Miser(const Miser& orig) {
}

Miser::~Miser() {
}

