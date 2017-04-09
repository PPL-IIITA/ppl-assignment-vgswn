/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sorting.cpp
 * Author: vips
 * 
 * Created on 28 March, 2017, 1:30 AM
 */

#include "Sorting.h"

Sorting::Sorting() {
}

 void Sorting::sort_gift(vector<Gift*>&g)
 {
 	sort(g.begin(),g.end(),cmp1);
 	//cout<<"success"<<endl;
 }
 void Sorting:: sort_happiness(vector<Couples*>&c){
 	sort(c.begin(),c.end(),cmp2);
 }
     void Sorting:: sort_compatibility(vector<Couples*>& c){
     	sort(c.begin(),c.end(),cmp3);
 }

void Sorting:: sort_Girl(vector<Girl*>&g)
{
		sort(g.begin(),g.end(),cmp5);
}
	void Sorting:: sort_Boy(vector<Boy*>&b)
{
	sort(b.begin(),b.end(),cmp4);
}
 void Sorting:: sort_boy(vector<Couples*>& c){
 	sort(c.begin(),c.end(),cmpboy);
 }

Sorting::Sorting(const Sorting& orig) {
}

Sorting::~Sorting() {
}

