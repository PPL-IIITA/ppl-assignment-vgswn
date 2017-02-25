/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   random_generate.cpp
 * Author: vips_g
 * 
 * Created on 23 February, 2017, 7:13 AM
 */

#include "random_generate.h"
#include<bits/stdc++.h>


using namespace std;

random_generate::random_generate() {
    ofstream outfile("input.txt");
    srand(time(NULL));
    ofstream myfile;
    myfile.open("input.txt");
    int x = 5 + rand() % 15;
    myfile << x << endl;
    int i;
    for (i = 1; i <= x; i++) {
        myfile << "Girl_id" << i <<" ";
        myfile << 10+rand() % 100 <<" ";
        myfile << 10+rand() % 100 << " ";
        myfile << 100+rand() % 1000 <<" ";
        int ty=rand()%3;
         if(ty==0)
                {
                    myfile<<"Choosy"<<" ";
                }
                else if(ty==1)
                {
                     myfile<<"Normal"<<" ";
                    
                }
                else
                {
                    myfile<<"Desperate"<<" ";
                    
                }
        myfile<<endl;

    }
    int y = x + rand() % 50;
    myfile << y << endl;

    for (i = 1; i <= y; i++) {
        myfile << "Boy_id" << i <<" ";
        myfile << 10+rand() % 100 << " ";
        myfile << 10+rand() % 100 <<" ";
        myfile << 100+rand() % 1000 <<" ";
        int ty=rand()%3;
         if(ty==0)
                {
                    myfile<<"Miser"<<" ";
                }
                else if(ty==1)
                {
                     myfile<<"Generous"<<" ";
                    
                }
                else
                {
                    myfile<<"Geek"<<" ";
                    
                }
myfile<<endl;

    }
    myfile.close();


}

random_generate::~random_generate() {
}

