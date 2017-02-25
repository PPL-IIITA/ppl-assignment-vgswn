/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q1.cpp
 * Author: vips_g
 * 
 * Created on 25 February, 2017, 4:15 PM
 */

#include "q1.h"
#include<bits/stdc++.h>
#include"Boy.h"
#include"Couples.h"
#include"Girl.h"
#include"random_generate.h"
#include <exception>
#include <time.h>

q1::q1() {
}

void q1::read() {

    ifstream myfile;
    myfile.open("input.txt");
    int ng;
    int i;
    string c;
    string name, type;

    int nb, at, intl, bud;
    myfile>>ng;
    for (i = 1; i <= ng; i++) {
        myfile>>name;
        //cout<<s;
        myfile>>at;
        myfile>>intl;
        myfile>>bud;
        myfile>>type;
        Girl g(name, at, intl, bud, type);
        girl_arr.push_back(g);
    }
    myfile>>nb;
    for (i = 1; i <= nb; i++) {
        myfile>>name;
        //cout<<s;
        myfile>>at;
        myfile>>intl;
        myfile>>bud;
        myfile>>type;
        Boy b(name, at, intl, bud, type);
        boy_arr.push_back(b);
    }
}

void q1::makecouples() {
    ofstream outfile("Event_Timestamp.csv");

    ofstream out;
    out.open("Event_Timestamp.csv", std::ios_base::app);
    out << "Event" << "\t \t \t \t \t" << " Couple ID \t \t \t \t" << "  Timestamp" << endl;

    int j;
    int i;
    for (i = 0; i < girl_arr.size(); i++) {
        //while(j<girl_arr.size())
        for (j = 0; j < boy_arr.size(); j++) {
            if (boy_arr[j].budget >= girl_arr[i].maintenance_cost && boy_arr[j].comm_or_not == false) {
                girl_arr[i].comm_or_not = true;
                boy_arr[j].comm_or_not = true;
                Couples Cp(boy_arr[j], girl_arr[i]);


                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Formation of couple\t \t" << Cp.couple_id << "\t \t" << buf << endl;


                couple_arr.push_back(Cp);


                break;
            }

        }
    }



}

void q1::out() {
    int i;
    ofstream outfile("couples.csv");
    ofstream out;
    out.open("couples.csv");

    for (i = 0; i < couple_arr.size(); i++) {
        out << " Match Found : " << couple_arr[i].gob.girl_id << " and " << couple_arr[i].bob.boy_id << endl;
        //out<<couple_arr[i].couple_id<<" "<<couple_arr[i].bob.boy_id<<" "<<couple_arr[i].gob.girl_id<<endl;
    }

}

q1::q1(const q1& orig) {
}

q1::~q1() {
}
