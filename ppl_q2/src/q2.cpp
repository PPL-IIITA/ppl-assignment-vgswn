/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q2.cpp
 * Author: vips_g
 * 
 * Created on 25 February, 2017, 4:15 PM
 */

#include "q2.h"
#include<bits/stdc++.h>
#include"Boy.h"
#include"Couples.h"
#include"Girl.h"
#include"random_generate.h"
#include <exception>

q2::q2() {
}

void q2::read() {

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

void q2::makecouples() {

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

void q2::out() {
    int i;
    ofstream outfile("couples.csv");
    ofstream out;
    out.open("couples.csv");

    for (i = 0; i < couple_arr.size(); i++) {
        out << "Match Found : " << couple_arr[i].gob.girl_id << " and " << couple_arr[i].bob.boy_id << endl;
        //out<<couple_arr[i].couple_id<<" "<<couple_arr[i].bob.boy_id<<" "<<couple_arr[i].gob.girl_id<<endl;
    }

}

void q2::read_gift() {

    ifstream myfile;
    myfile.open("gift.txt");


    int i;
    string c;
    string name, type;

    int ng, cs, val;
    myfile>>ng;
    for (i = 1; i <= ng; i++) {
        myfile>>name;
        //cout<<s;
        myfile>>cs;
        myfile>>val;

        myfile>>type;
        Gift g(type, cs, val, name);
        gift_arr.push_back(g);
    }

}

void q2::gift_distribute() {

    ofstream out;
    out.open("Event_Timestamp.csv", std::ios_base::app);
    out << "Event" << "\t \t \t \t" << "Gift Id \t \t \t" << " Couple ID\t \t \t" << "  Timestamp" << endl;
    int y, k, j, x, mc;
    for (k = 0; k < couple_arr.size(); k++) {
        if (couple_arr[k].bob.type == "Miser") {
            mc = couple_arr[k].gob.maintenance_cost;
            j = 0;
            x = 0;
            while (j < mc) {
                j += gift_arr[x].cost;
                couple_arr[k].gift_arr.push_back(gift_arr[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << gift_arr[x].gift_id << "\t \t " << couple_arr[k].couple_id << "\t \t" << buf << endl;
                x++;
            }
        } else if (couple_arr[k].bob.type == "Generous") {
            mc = couple_arr[k].bob.budget;
            j = 0;
            x = 0;
            while (j < mc) {
                j += gift_arr[x].cost;
                couple_arr[k].gift_arr.push_back(gift_arr[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << gift_arr[x].gift_id << "\t \t " << couple_arr[k].couple_id << "\t \t" << buf << endl;
                x++;
            }
        } else {
            mc = couple_arr[k].gob.maintenance_cost;
            j = 0;
            x = 0;
            while (j < mc) {
                j += gift_arr[x].cost;
                couple_arr[k].gift_arr.push_back(gift_arr[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << gift_arr[x].gift_id << "\t \t " << couple_arr[k].couple_id << "\t \t" << buf << endl;
                x++;
            }
            y = couple_arr[k].bob.budget - j;
            for (j = 0; j < gift_arr.size(); j++) {
                if (gift_arr[j].type == "Luxury" && y >= gift_arr[j].cost) {
                    couple_arr[k].gift_arr.push_back(gift_arr[j]);
                    time_t now = time(0);
                    struct tm tstruct;
                    char buf[80];
                    tstruct = *localtime(&now);

                    strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                    out << "Distribution of Gift\t \t" << gift_arr[j].gift_id << "\t \t " << couple_arr[k].couple_id << "\t \t" << buf << endl;
                }
            }
        }
    }

}

void q2::calculation() {

    int i, j, x, y, mc;
    for (i = 0; i < couple_arr.size(); i++) {

        x = 0;
        y = 0;
        int hapg = 0, hapb = 0;
        for (j = 0; j < couple_arr.at(i).gift_arr.size(); j++) {
            x += couple_arr.at(i).gift_arr.at(j).cost;
            y += couple_arr.at(i).gift_arr.at(j).value;
        }
        mc = couple_arr.at(i).gob.maintenance_cost;
        if (couple_arr.at(i).gob.type == "Choosy") {
            hapg = log10(x - mc + 2 * y);

        } else if (couple_arr.at(i).gob.type == "Desperate") {
            hapg = exp((x - mc) % 15);

        } else {
            hapg = x - mc + y;

        }
        if (couple_arr.at(i).bob.type == "Miser") {
            hapb = abs(couple_arr.at(i).bob.budget - x);
        } else if (couple_arr.at(i).bob.type == "Generous") {
            hapb = hapg;
        } else {
            hapb = couple_arr.at(i).gob.intelligence;
        }
        couple_arr.at(i).bob.happiness = hapb;
        couple_arr.at(i).gob.happiness = hapg;
        couple_arr.at(i).happiness = hapb + hapg;
        couple_arr.at(i).compatibility = couple_arr.at(i).bob.budget - mc + abs(couple_arr.at(i).gob.attractiveness - couple_arr.at(i).bob.attractiveness) + abs(couple_arr.at(i).gob.intelligence - couple_arr.at(i).bob.intelligence);
    }
}

void q2::out1() {
    int i;
    int j;
    ofstream outfile("happiness.csv");
    ofstream out;
    out.open("happiness.csv");
    out << "Top Happy Couples" << endl;
    out<<endl;
      out<<endl;
    for (i = 0; i < couple_arr.size(); i++) {
        out << "Couple id: " << couple_arr[i].couple_id << "\tHappiness: " << couple_arr[i].happiness << "\t";
        out<<"Gift Exchanged: "<<couple_arr[i].gift_arr.size()<<endl;
        
    }
}

void q2::out2()
 {
    int i, j;
    ofstream outfile("compatibility.csv");
    ofstream out;
    out.open("compatibility.csv");
    out << "Most Compatible Couple" << endl;
      out<<endl;
        out<<endl;
    for (i = 0; i < couple_arr.size(); i++) {
        //out<<couple_arr[i].couple_id<<" "<<couple_arr[i].compatibility<<endl;

        out << "Couple id:" << couple_arr[i].couple_id << " \tCompatibility:" << couple_arr[i].compatibility << "\t";
          out<<"Gift Exchanged: "<<couple_arr[i].gift_arr.size()<<endl;
    }
}

q2::q2(const q2& orig) {



}

q2::~q2() {
}
