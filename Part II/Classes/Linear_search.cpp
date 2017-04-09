/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Linear_search.cpp
 * Author: vips
 * 
 * Created on 7 April, 2017, 10:07 PM
 */

#include "Linear_search.h"
using namespace std;
Linear_search::Linear_search() {
}
 void Linear_search:: find(vector<Couples*>&c){
 	ofstream outfile("gf_list_linear.txt");
	  ofstream my;
    my.open("gf_list_linear.txt");
    ifstream myfile;
    myfile.open("search_boy.txt");
    int n;
    myfile>>n;
    int i;
    for(i=0;i<n;i++)
    {	
    	string boy;
    	myfile>>boy;
    	string gf="No Girl friend";
    	for(int r=0;r<c.size();r++)
    	{
    		if(c[r]->bob->boy_id==boy)
    			{	gf=c[r]->gob->girl_id;
    				break;
    			}

    	}
    	
	    	my<<boy<<"->"<<gf<<endl;
    }

 }


Linear_search::~Linear_search() {
}

