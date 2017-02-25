/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Girl.h
 * Author: vips_g
 *
 * Created on 23 February, 2017, 6:26 AM
 */

#ifndef GIRL_H
#define GIRL_H

#include<bits/stdc++.h>
using namespace std ;
class Girl {
public:
    Girl();
    Girl(string s,int a,int i,int b,string t);
    string girl_id;
    int attractiveness;
    int intelligence;
    bool comm_or_not;
    int maintenance_cost;
    int happiness;
    string type;
    virtual ~Girl();
private:

};

#endif /* GIRL_H */

