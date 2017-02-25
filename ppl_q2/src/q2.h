/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   q2.h
 * Author: vips_g
 *
 * Created on 25 February, 2017, 4:15 PM
 */

#ifndef Q2_H
#define Q2_H
#include<bits/stdc++.h>
#include"Boy.h"
#include"Couples.h"
#include"Girl.h"
#include"random_generate.h"
#include <exception>



class q2 {
public:
    q2();
    void read();
    void makecouples();
    void out();
	void out1();
	void out2();
	void gift_distribute();
   void read_gift();
void calculation();
  vector<Boy>boy_arr;
    vector<Girl> girl_arr;
    vector<Couples> couple_arr;
vector<Gift>gift_arr;
    q2(const q2& orig);
    virtual ~q2();
private:

};

#endif /* Q2_H */
