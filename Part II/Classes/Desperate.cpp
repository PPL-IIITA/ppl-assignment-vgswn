/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Desperate.cpp
 * Author: vips
 * 
 * Created on 26 March, 2017, 12:01 PM
 */

#include "Desperate.h"
#include<bits/stdc++.h>
using namespace std;
Desperate::Desperate(string s,int a,int i,int b) {
	girl_id=s;
    attractiveness=a;
    intelligence=i;
    comm_or_not=false;
    maintenance_cost=b;
    happiness=0;
    }

int Desperate::Happiness(vector<Gift*>&v)
{
	int j,x=0;
	for (j = 0; j < v.size(); j++) {
            x += v[j]->cost;
            
        }
         //cout<<"faw"<<endl;
       return exp((x - maintenance_cost) % 15);
}
Desperate::Desperate(const Desperate& orig) {
}
Desperate::Desperate(){}

Desperate::~Desperate() {
}

