/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q5.cpp
 * Author: vips_g
 * 
 * Created on 25 February, 2017, 4:15 PM
 */
	#include<bits/stdc++.h>
	#include"../Classes/Boy.h"
#include"../Classes/Couples.h"
#include"../Classes/Girl.h"
#include"../Classes/Normal.h"
#include"../Classes/Choosy.h"
#include"../Classes/Desperate.h"
#include"../Classes/Miser.h"
#include"../Classes/Geeks.h"
#include"../Classes/Generous.h"
#include"../Classes/random_generate.h"
#include"../Classes/Couples.h"
#include <exception>
#include"../Classes/Luxury.h"
#include"../Classes/Utility.h"
#include"../Classes/Essential.h"
#include"../Classes/Algorithm.h"
#include"../Classes/Sorting.h"
	#include"q5.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"
using namespace std;


q5::q5() {
}
void q5::read() {

    ifstream myfile;
    myfile.open("input.txt");
    int ng;
    int i;
    string c;
    string name, type;

    int nb, at, intl, bud;
    myfile>>ng;
    for (i = 1; i <= ng; i++) {
    	myfile>>type;

        myfile>>name;
        //cout<<s;
        myfile>>at;
        myfile>>intl;
        myfile>>bud;
        if(type=="Normal"){
        	//cout<<"kasdbckjsb"<<endl;
        	Normal *g=new Normal(name, at, intl, bud);
        	girl_arr.push_back(g);
}
        
        else if(type=="Desperate"){
        	Desperate *g=new Desperate(name, at, intl, bud);
        girl_arr.push_back(g);
}
        
        else{
        	Choosy *g=new Choosy(name, at, intl, bud);
        girl_arr.push_back(g);

        }

        
            }
    myfile>>nb;
    int g=0,m=0,ge=0;
    for (i = 1; i <= nb; i++) {
    	 myfile>>type;
        myfile>>name;
        //cout<<s;
        myfile>>at;
        myfile>>intl;
        myfile>>bud;
        if(type=="Geeks"){
        	g++;
        	Geeks *b=new Geeks(name, at, intl, bud);
         boy_arr.push_back(b);}
        else if(type=="Miser"){
        	Miser *b=new Miser(name, at, intl, bud);
         boy_arr.push_back(b);
     	m++;}
        else{
        	ge++;
        	Generous *b=new Generous(name, at, intl, bud);
         boy_arr.push_back(b);
       }
        //Boy b(name, at, intl, bud, type);
       
    }
        //cout<<g<<" "<<ge<<" "<<m<<endl;
}
void q5::x(){
    cout<<gift_arr.size()<<endl;
	/*
	for (int i = 0; i < gift_arr.size(); ++i)
	{
		cout<<gift_arr[i].gift_id<<endl;
	}
	/*for (int i = 0; i < girl_arr.size(); ++i)
	{
		cout<<girl_arr[i]->girl_id<<endl;
	}*/
}








void q5::out() {
    int i;
    ofstream outfile("couples.csv");
    ofstream out;
    out.open("couples.csv");

    for (i = 0; i < couple_arr.size(); i++) {
        out << "Match Found : " << couple_arr[i]->gob->girl_id << " and " << couple_arr[i]->bob->boy_id << endl;
        //out<<couple_arr[i]->couple_id<<" "<<couple_arr[i]->bob->boy_id<<" "<<couple_arr[i]->gob->girl_id<<endl;
    }

}

void q5::read_gift() {

    ifstream myfile;
    myfile.open("gift.txt");


    int i;
    string c;
    string name, type;

    int ng, cs, val;
    myfile>>ng;
    for (i = 1; i <= ng; i++) {
          myfile>>type;
        myfile>>name;
        //cout<<s;
        myfile>>cs;
        myfile>>val;

      
        if(type=="Luxury")
        {

            Luxury *g=new Luxury(cs, val, name);
        gift_arr.push_back(g);

        }
        else if(type=="Essential")
        {
        Essential *g=new Essential(cs, val, name);
        gift_arr.push_back(g);
        }
        else
        {
            Utility *g=new Utility(cs, val, name);
        gift_arr.push_back(g);
        }
        
    }

}

void q5::gift_distribute() {

    ofstream out;
    out.open("Event_Timestamp.csv", std::ios_base::app);
    out << "Event" << "\t \t \t \t" << "Gift Id \t \t \t" << " Couple ID\t \t \t" << "  Timestamp" << endl;
    int y, k, j, x, mc;
    for (k = 0; k < couple_arr.size(); k++) {
    	//cout<<"kasdbckjsb"<<endl;
    	if ( Miser* m=dynamic_cast <Miser*> (couple_arr[k]->bob))
        //if (Miser *m=(Miser *)couple_arr[k]->bob) {
          {
          //	cout<<"kasdbckjsb"<<endl;
            mc = couple_arr[k]->gob->maintenance_cost;
            j = 0;
            x = 0;
            while (j < mc) {
                j += gift_arr[x]->cost;
                couple_arr[k]->gift_arr.push_back(gift_arr[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << gift_arr[x]->gift_id << "\t \t " << couple_arr[k]->couple_id << "\t \t" << buf << endl;
                x++;
            }
        } 
        	
        	else if ( Generous* m=dynamic_cast <Generous*> (couple_arr[k]->bob))
        	//else if (couple_arr[k]->bob->type == "Generous") {
            {
            	mc = couple_arr[k]->bob->budget;
            j = 0;
            x = 0;
            while (j < mc) {
                j += gift_arr[x]->cost;
                couple_arr[k]->gift_arr.push_back(gift_arr[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << gift_arr[x]->gift_id << "\t \t " << couple_arr[k]->couple_id << "\t \t" << buf << endl;
                x++;
            }
        } else {
            mc = couple_arr[k]->gob->maintenance_cost;
            j = 0;
            x = 0;
            while (j < mc) {
                j += gift_arr[x]->cost;
                couple_arr[k]->gift_arr.push_back(gift_arr[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << gift_arr[x]->gift_id << "\t \t " << couple_arr[k]->couple_id << "\t \t" << buf << endl;
                x++;
            }
            y = couple_arr[k]->bob->budget - j;
            for (j = 0; j < gift_arr.size(); j++) {
                if (gift_arr[j]->type == "Luxury" && y >= gift_arr[j]->cost) {
                    couple_arr[k]->gift_arr.push_back(gift_arr[j]);
                    time_t now = time(0);
                    struct tm tstruct;
                    char buf[80];
                    tstruct = *localtime(&now);

                    strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                    out << "Distribution of Gift\t \t" << gift_arr[j]->gift_id << "\t \t " << couple_arr[k]->couple_id << "\t \t" << buf << endl;
                }
            }
        }
    }
}



void q5::calculation() {

    int i, j, x, y, mc;
    for (i = 0; i < couple_arr.size(); i++) {


       /* y = 0;
        int hapg = 0, hapb = 0;
        for (j = 0; j < couple_arr[i]->gift_arr.size(); j++) {
            x += couple_arr[i]->gift_arr.at(j).cost;
            y += couple_arr[i]->gift_arr.at(j).value;
        }
        mc = couple_arr[i]->gob->maintenance_cost;
        if (couple_arr[i]->gob->type == "Choosy") {
            hapg = log10(x - mc + 2 * y);

        } else if (couple_arr[i]->gob->type == "Desperate") {
            hapg = exp((x - mc) % 15);

        } else {
            hapg = x - mc + y;

        }
        if (couple_arr[i]->bob->type == "Miser") {
            hapb = abs(couple_arr[i]->bob->budget - x);
        } else if (couple_arr[i]->bob->type == "Generous") {
            hapb = hapg;
        } else {
            hapb = couple_arr[i]->gob->intelligence;
        }*/
        
       couple_arr[i]->bob->happiness = couple_arr[i]->bob->Happiness(couple_arr[i]->gift_arr,couple_arr[i]->gob);
       couple_arr[i]->bob->happiness = couple_arr[i]->gob->Happiness(couple_arr[i]->gift_arr);
        
        
        couple_arr[i]->happiness = couple_arr[i]->bob->happiness+couple_arr[i]->gob->happiness;
        couple_arr[i]->compatibility = abs(couple_arr[i]->bob->budget - mc + abs(couple_arr[i]->gob->attractiveness - couple_arr[i]->bob->attractiveness) + abs(couple_arr[i]->gob->intelligence - couple_arr[i]->bob->intelligence));
    }
}

void q5::out1() {
    int i;
    int j;
    ofstream outfile("happiness.csv");
    ofstream out;
    out.open("happiness.csv");
    out << "Top Happy Couples" << endl;
    out<<endl;
      out<<endl;
    for (i = 0; i < couple_arr.size(); i++) {
        out << "Couple id: " << couple_arr[i]->couple_id << "\tHappiness: " << couple_arr[i]->happiness << "\t";
        out<<"Gift Exchanged: "<<couple_arr[i]->gift_arr.size()<<endl;
        
    }
}

void q5::out2()
 {
    int i, j;
    ofstream outfile("compatibility.csv");
    ofstream out;
    out.open("compatibility.csv");
    out << "Most Compatible Couple" << endl;
      out<<endl;
        out<<endl;
    for (i = 0; i < couple_arr.size(); i++) {
        //out<<couple_arr[i]->couple_id<<" "<<couple_arr[i]->compatibility<<endl;

        out << "Couple id:" << couple_arr[i]->couple_id << " \tCompatibility:" << couple_arr[i]->compatibility << "\t";
          out<<"Gift Exchanged: "<<couple_arr[i]->gift_arr.size()<<endl;
    }
}

q5::q5(const q5& orig) {



}

q5::~q5() {
}
