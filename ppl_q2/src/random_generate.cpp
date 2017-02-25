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
        myfile << 10+rand() % 100 <<" ";
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
    try
    {
    ofstream outfile1("gift.txt");
     ofstream myfile1;
     
     myfile1.open("gift.txt");
     int ng,vl,cs;
     ng=500+rand()%501;
     myfile1<< ng<<endl;
      for(i=1;i<=ng;i++)
      {
          string s="gift_id_";
          myfile1<<s;
          myfile1<<i<<" ";
           cs=50+rand()%250;
           myfile1<<cs<<" ";
            x=rand()%2;
            if(x==0)
                {
                    vl=cs+rand()%100;
                }
                else
                {
                    vl=cs-rand()%50;
                }
            myfile1<<vl<<" ";
            int ty=rand()%3;
                if(ty==0)
                {
                    myfile1<<"Essential"<<" ";
                }
                else if(ty==1)
                {
                    myfile1<<"Luxury"<<" ";
                }
                else
                {
                    myfile1<<"Utility"<<" ";
                }
	myfile1<<endl;
            
            
      }
     myfile1.close();
}
     catch( const char* msg )
{
   // catch block
}


}

random_generate::~random_generate() {
}

