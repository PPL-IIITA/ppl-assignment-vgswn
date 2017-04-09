/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Choosy.cpp
 * Author: vips
 * 
 * Created on 26 March, 2017, 12:01 PM
 */

#include "Choosy.h"
#include<bits/stdc++.h>
using namespace std;
Choosy::Choosy(){}
Choosy::Choosy(string s,int a,int i,int b) {
	girl_id=s;
    attractiveness=a;
    intelligence=i;
    comm_or_not=false;
    maintenance_cost=b;
    happiness=0;
    }
int Choosy::Happiness(vector<Gift*>&v)
{	int j,x=0,y=0;
	for (j = 0; j < v.size(); j++) {
            x += v[j]->cost;
            y += v[j]->value;
        }
        // cout<<"faw"<<endl;
         return log10(x - maintenance_cost + 2 * y);

}

Choosy::Choosy(const Choosy& orig) {
}

Choosy::~Choosy() {
}

