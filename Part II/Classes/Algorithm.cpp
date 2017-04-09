/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Algorithm.cpp
 * Author: vips
 * 
 * Created on 27 March, 2017, 11:28 PM
 */

#include "Algorithm.h"

Algorithm::Algorithm() {
}
 void Algorithm:: algo_pre(vector<Boy*>&boy_arr,vector<Girl*>&girl_arr,vector<Couples*>& couple_arr,map<string,string>&boy_girl,map<string,string>&girl_boy,map<string,string>&cur_gf){

 	  

    ofstream out;
    out.open("Event_Timestamp.csv", std::ios_base::app);
    out << "Event" << "\t \t \t \t \t" << " Couple ID \t \t \t \t" << "  Timestamp" << endl;

    int j;
    int i;
   // cout<<b.size()<<endl;
   
    for (i = 0; i < girl_arr.size(); i++) {
        //while(j<girl_arr.size())
        for (j = 0; j < boy_arr.size(); j++) {
            //cout<<boy_arr[j]->budget <<" "<<girl_arr[i]->maintenance_cost<<endl;
            if (boy_arr[j]->budget >= girl_arr[i]->maintenance_cost && boy_arr[j]->comm_or_not == false&&girl_arr[i]->comm_or_not==false&&girl_boy[girl_arr[i]->girl_id]!=boy_arr[j]->boy_id) {
                girl_arr[i]->comm_or_not = true;
                boy_arr[j]->comm_or_not = true;
                cur_gf[boy_arr[j]->boy_id]=girl_arr[i]->girl_id;
                Couples *Cp=new Couples(boy_arr[j], girl_arr[i]);


                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << "Formation of couple\t \t" << Cp->couple_id << "\t \t" << buf << endl;


                couple_arr.push_back(Cp);
                break;
                
                
            }
            //cout<<"here"<<j<<endl;

        }
         
    }




 }
    void Algorithm:: algo_new(vector<Boy*>&boy_arr,vector<Girl*>&girl_arr,vector<Couples*>& couple_arr,map<string,string>&boy_girl,map<string,string>&girl_boy,map<string,string>&cur_gf){



    	 ofstream out;
    out.open("Event_Timestamp.csv", std::ios_base::app);
    out << "Event" << "\t \t \t \t \t" << "  \t \t" << "  Timestamp" << endl;

    int j;
    int flag=0;;
    int i,gpos=0,bpos=0;
    int t=0;
    while(1){	
    	
    	if(t%2==0)
    	{	
    		for (i = gpos; i < girl_arr.size(); i++)
    				{
    					if(girl_arr[i]->comm_or_not!=true)
    							break;
    				}
                    if(i>=girl_arr.size()-1){
                        if(i=girl_arr.size()-1){
                          if(girl_arr[i]->comm_or_not==true){
                              break;
                          }
                        }
                        else
                            break;
                    }
    				gpos=i;

    				for (j = 0; j < boy_arr.size(); j++) {
            if (boy_arr[j]->budget >= girl_arr[gpos]->maintenance_cost && boy_arr[j]->comm_or_not == false&&girl_arr[gpos]->comm_or_not==false&&girl_boy[girl_arr[gpos]->girl_id]!=boy_arr[j]->boy_id) {
                girl_arr[gpos]->comm_or_not = true;
                boy_arr[j]->comm_or_not = true;
                Couples *Cp=new Couples(boy_arr[j], girl_arr[gpos]);
                 cur_gf[boy_arr[j]->boy_id]=girl_arr[gpos]->girl_id;

                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                out << girl_arr[gpos]->girl_id<<" Chooses "<< boy_arr[j]->boy_id<<" \t\t" << buf << endl;


                couple_arr.push_back(Cp);
                break;

    	}
    }

    

gpos++;
}
else
{	//cout<<t<<endl;

    	for (i = bpos; i < boy_arr.size(); i++) {
      		if(boy_arr[i]->comm_or_not!=true)
      				break;
      }
      if(i>=boy_arr.size()-1){
        if(i==boy_arr.size()-1){

        if(boy_arr[i]->comm_or_not==true){
                break;
            }
        }
        else
            break;
    }
      bpos=i;
        for (j = 0; j < girl_arr.size(); j++) {
            if (boy_arr[bpos]->budget >= girl_arr[j]->maintenance_cost && girl_arr[j]->comm_or_not == false&&boy_arr[bpos]->comm_or_not==false&&boy_girl[boy_arr[bpos]->boy_id]!=girl_arr[j]->girl_id) {
                girl_arr[j]->comm_or_not = true;
                boy_arr[bpos]->comm_or_not = true;
                Couples *Cp=new Couples(boy_arr[bpos], girl_arr[j]);
                 cur_gf[boy_arr[bpos]->boy_id]=girl_arr[j]->girl_id;

                time_t now = time(0);
                struct tm tstruct;
                char buf[80];
                tstruct = *localtime(&now);

                strftime(buf, sizeof (buf), "%Y-%m-%d.%X", &tstruct);
                 out << boy_arr[bpos]->boy_id<<" Chooses "<< girl_arr[j]->girl_id <<" \t\t"<< buf << endl;

                couple_arr.push_back(Cp);


                break;
            }

        }
        bpos++;
    }
    if(flag!=couple_arr.size())
    {	
    	flag=couple_arr.size();
    	t++;

		}
    }
    	

}

Algorithm::Algorithm(const Algorithm& orig) {
}

Algorithm::~Algorithm() {
}

