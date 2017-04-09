/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hash_search.cpp
 * Author: vips
 * 
 * Created on 7 April, 2017, 10:07 PM
 */

#include "Hash_search.h"
using namespace std;
Hash_search::Hash_search() {
}
 void Hash_search:: find(vector<Couples*>&c){
 	std::map<string,string> map;
 	string s;
 	s=map["Dummy"];
 	for(int j=0;j<c.size();j++)
 	{
 		map[c[j]->bob->boy_id]=c[j]->gob->girl_id;
 	}
ofstream outfile("gf_list_hashMap.txt");
	  ofstream my;
    my.open("gf_list_hashMap.txt");
    ifstream myfile;
    myfile.open("search_boy.txt");
    int n;
    myfile>>n;
    int i;
    for(i=0;i<n;i++)
    {	//printf("hggchvg\n");
    	string boy;
    	myfile>>boy;
    	if(map[boy]==s)
    		my<<boy<<"->No Girl friend"<<endl;
	else
	    	my<<boy<<"->"<<map[boy]<<endl;
    }


 }
 

Hash_search::~Hash_search() {
}

