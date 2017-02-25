/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gift.h
 * Author: vips_g
 *
 * Created on 23 February, 2017, 6:42 AM
 */

#ifndef GIFT_H
#define GIFT_H
#include<bits/stdc++.h>
using namespace std ;

class Gift {
public:
	 Gift();
   Gift(string t,int c,int v,string gi);
	 string type;
    int cost;
    int value;
    string gift_id;
	

    virtual ~Gift();
private:
	
   

};

#endif /* GIFT_H */

