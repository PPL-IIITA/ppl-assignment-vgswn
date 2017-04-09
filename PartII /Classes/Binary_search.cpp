/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Binary_search.cpp
 * Author: vips
 * 
 * Created on 7 April, 2017, 10:07 PM
 */

#include "Binary_search.h"
using namespace std;
Binary_search::Binary_search() {

}
 void Binary_search:: find(vector<Couples*>&c){

 	ofstream outfile("gf_list_binary.txt");
	  ofstream my;
    my.open("gf_list_binary.txt");
    ifstream myfile;
    myfile.open("search_boy.txt");
    int n;
    myfile>>n;
    int i;
    for(i=0;i<n;i++)
    {	//printf("hggchvg\n");
    	string boy;
    	myfile>>boy;
    	string gf=search(c,boy,0,c.size()-1);
    	
	    	my<<boy<<"->"<<gf<<endl;
    }

 }
      string Binary_search:: search(vector<Couples*>&c,string s,int st,int end){
      	int flag=0;
      	string h;
      	int i;
      	
    	int x=s.size()-6;
    	string g=s.substr(6,x);
    	int y=0;
    	for(int i=0;i<x;i++)
    	{
    		y*=10;
    		y+=g[i]-'0';
    		
    	}
      	while(st<=end)
      	{
      		
      		int mid=(st+end)/2;
    	x=c[mid]->bob->boy_id.size()-6;
    	g=c[mid]->bob->boy_id.substr(6,x);
    	int yy=0;
    	for(int i=0;i<x;i++)
    	{
    		yy*=10;
    		yy+=g[i]-'0';
    		
    	}
    	//cout<<y<<" "<<yy<<endl;
      		if(y==yy)
      		{
      			//cout<<y<<endl;
      			flag=1;
      			h=c[mid]->gob->girl_id;
      			break;
      		}
      		else if(y<yy)
      			end=mid-1;
      		else 
      			st=mid+1;
      	}
      	if(flag)
      	{
      		return h;
      	}
      	else
      		{	
      			
      		return "No Girl Friend";
      	}
      }


Binary_search::~Binary_search() {
}

