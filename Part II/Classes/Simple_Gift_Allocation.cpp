/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Simple_Gift_Allocation.cpp
 * Author: vips
 * 
 * Created on 8 April, 2017, 6:44 PM
 */

#include "Simple_Gift_Allocation.h"


Simple_Gift_Allocation::Simple_Gift_Allocation() {
}
void Simple_Gift_Allocation:: allocate_gift(vector<Couples*>&c,vector<Gift*>&g){

 ofstream out;
    out.open("Event_Timestamp.csv", std::ios_base::app);
    out << "Event" << "\t \t \t \t" << "Gift Id \t \t \t" << " Couple ID\t \t \t" << "  Timestamp" << endl;
    int y, k, j, x, mc;
    for (k = 0; k < c.size(); k++) {
        //cout<<"kasdbckjsb"<<endl;
        if ( Miser* m=dynamic_cast <Miser*> (c[k]->bob))
        //if (Miser *m=(Miser *)c[k]->bob) {
          {
          //    cout<<"kasdbckjsb"<<endl;
            mc = c[k]->gob->maintenance_cost;
            j = 0;
            x = 0;
            while (j < mc) {
                j += g[x]->cost;
                c[k]->gift_arr.push_back(g[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << g[x]->gift_id << "\t \t " << c[k]->couple_id << "\t \t" << buf << endl;
                x++;
            }
        } 
            
            else if ( Generous* m=dynamic_cast <Generous*> (c[k]->bob))
            //else if (c[k]->bob->type == "Generous") {
            {
                mc = c[k]->bob->budget;
            j = 0;
            x = 0;
            while (j < mc) {
                j += g[x]->cost;
                c[k]->gift_arr.push_back(g[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << g[x]->gift_id << "\t \t " << c[k]->couple_id << "\t \t" << buf << endl;
                x++;
            }
        } else {
            mc = c[k]->gob->maintenance_cost;
            j = 0;
            x = 0;
            while (j < mc) {
                j += g[x]->cost;
                c[k]->gift_arr.push_back(g[x]);
                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Distribution of Gift\t \t" << g[x]->gift_id << "\t \t " << c[k]->couple_id << "\t \t" << buf << endl;
                x++;
            }
            y = c[k]->bob->budget - j;
            for (j = 0; j < g.size(); j++) {
                if (g[j]->type == "Luxury" && y >= g[j]->cost) {
                    c[k]->gift_arr.push_back(g[j]);
                    time_t now = time(0);
                    struct tm tstruct;
                    char buf[80];
                    tstruct = *localtime(&now);

                    strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                    out << "Distribution of Gift\t \t" << g[j]->gift_id << "\t \t " << c[k]->couple_id << "\t \t" << buf << endl;
                }
            }
        }
    }

}

Simple_Gift_Allocation::Simple_Gift_Allocation(const Simple_Gift_Allocation& orig) {
}

Simple_Gift_Allocation::~Simple_Gift_Allocation() {
}

