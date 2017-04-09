/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Sorting.h
 * Author: vips
 *
 * Created on 28 March, 2017, 1:30 AM
 */

#ifndef SORTING_H
#define SORTING_H
#include"Boy.h"
#include"Girl.h"
#include"Gift.h"
#include"Couples.h"
#include<bits/stdc++.h>
using namespace std;


class Sorting {
public:
   /*!
 * Default constructor
 */ Sorting();
   /* static int cmpboy(Couples* a,Couples* b)
    {
    	if(a->bob->boy_id.size()==b->bob->boy_id.size()){
    			if(a->bob->boy_id.compare(b->bob->boy_id)<0)
    		return 1;
    	return 0;
    }
    else
    {
    	if(a->bob->boy_id.size()<b->bob->boy_id.size())
    		return 1;
    	else
    		return 0;
    }
    }*/
    static int cmpboy(Couples* a,Couples* b)
    {
    	int x=a->bob->boy_id.size()-6;
    	string g=a->bob->boy_id.substr(6,x);
    	int y=0;
    	for(int i=0;i<x;i++)
    	{
    		y*=10;
    		y+=g[i]-'0';
    		
    	}
    	x=b->bob->boy_id.size()-6;
    	g=b->bob->boy_id.substr(6,x);
    	int yy=0;
    	for(int i=0;i<x;i++)
    	{
    		yy*=10;
    		yy+=g[i]-'0';
    		
    	}

    	return y<yy;
    }

   static int cmp1(Gift* a,Gift* b)
{
	if(a->cost!=b->cost)
	{
		if(a->cost<b->cost)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if(a->value>b->value)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};
static int cmp2(Couples* a,Couples* b)
{
	
		if(a->happiness>b->happiness)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	
};
static int cmp3(Couples* a,Couples* b)
{
	
		if(a->compatibility>b->compatibility)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	
};

static int cmp4(Boy* a,Boy* b)
{
	
		if(a->attractiveness>b->attractiveness)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	
};

static int cmp5(Girl* a,Girl* b)
{
	
		if(a->maintenance_cost<b->maintenance_cost)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	
};
	/*!
 * Sort Girl According to their Maintenance Cost
 */void sort_Girl(vector<Girl*>&g);

	/*!
 * Sort Boy According to their Attractiveness
 */	void sort_Boy(vector<Boy*>&b);
   
    /*!
 * Sort Gift According to their Cost and Value
 */ void sort_gift(vector<Gift*>&g);
     
     /*!
 * Sort Couples According to their Happiness
 */void sort_happiness(vector<Couples*>&c);
 
     /*!
 * Sort Couples According to their Comptibility
 */    void sort_compatibility(vector<Couples*>& c);
     
       /*!
 * Sort Couples According to Boy name
 */  void sort_boy(vector<Couples*>& c);
    Sorting(const Sorting& orig);
   
    /*!
 * Default Destructor
 */ virtual ~Sorting();
private:

};

#endif /* SORTING_H */

