/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q1.h
 * Author: vips_g
 *
 * Created on 25 February, 2017, 4:15 PM
 */

#ifndef Q1_H
#define Q1_H
#include<bits/stdc++.h>
#include"Boy.h"
#include"Couples.h"
#include"Girl.h"
#include"random_generate.h"
#include <exception>



class q1 {
public:
    q1();
    void read();
    void makecouples();
    void out();
  vector<Boy>boy_arr;
    vector<Girl> girl_arr;
    vector<Couples> couple_arr;
    q1(const q1& orig);
    virtual ~q1();
private:

};

#endif /* Q1_H */
