/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Boy.h
 * Author: vips_g
 *
 * Created on 23 February, 2017, 6:18 AM
 */

#ifndef BOY_H
#define BOY_H
#include<bits/stdc++.h>
using namespace std ;

class Boy {
public:
    Boy();
  Boy(string s,int a,int i,int b,string t);
    string boy_id;
    int attractiveness;
    int intelligence;
    bool comm_or_not;
    int budget;
    int happiness;
    string type;
    virtual ~Boy();
private:

};

#endif /* BOY_H */

