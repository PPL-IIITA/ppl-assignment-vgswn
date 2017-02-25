#include<bits/stdc++.h>
#include"Boy.h"
#include"Couples.h"
#include"Gift.h"
#include"Girl.h"
#include"random_generate.h"
#include <exception>
#include"q2.h"

using namespace std;
int cmp1(Gift a,Gift b)
{
	if(a.cost!=b.cost)
	{
		if(a.cost<b.cost)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if(a.value>b.value)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int cmp2(Couples a,Couples b)
{
	if(a.happiness!=b.happiness)
	{
		if(a.happiness>b.happiness)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
            return 0;
	}
}
int cmp3(Couples a,Couples b)
{
	if(a.compatibility!=b.compatibility)
	{
		if(a.compatibility>b.compatibility)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
            return 0;
	}
}
int main() {
	 random_generate r;

	q2 x;
	x.read();
	x.makecouples();
	x.out();
	x.read_gift();

    sort(x.gift_arr.begin(),x.gift_arr.end(),cmp1);
	x.gift_distribute();
	x.calculation();
 sort(x.couple_arr.begin(),x.couple_arr.end(),cmp2);
x.out1();
  sort(x.couple_arr.begin(),x.couple_arr.end(),cmp3);
x.out2();


    /*vector<Boy>boy_arr;
    vector<Girl> girl_arr;
    vector<Couples> couple_arr;
    vector<Gift> gift_arr;
	ofstream outfile("output.csv");
	ofstream out;
    out.open("output.csv");



    random_generate r;
     try
        {
          
    ifstream myfile;
    myfile.open("dat.txt");
ofstream outfile("couples.csv");
	ofstream couple;
    couple.open("couples.csv");
        
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
     
        myfile>>at;
        myfile>>intl;
        myfile>>bud;
        myfile>>type;
        Boy b(name, at, intl, bud, type);
        boy_arr.push_back(b);
    }
     
     
            int j;
           for(i=0;i<girl_arr.size();i++){
          
                for(j=0;j<boy_arr.size();j++)
            {
                if(boy_arr[j].budget>=girl_arr[i].maintenance_cost&&boy_arr[j].comm_or_not==false)
                {
                    girl_arr[i].comm_or_not=true;
                    boy_arr[j].comm_or_not=true;
                    Couples Cp(boy_arr[j],girl_arr[i]);
                    couple_arr.push_back(Cp);
                    break;
                }
                
            }
            }
        for(i=0;i<couple_arr.size();i++)
            {
		couple<<"Match Found : "   <<couple_arr[i].gob.girl_id<<" and " <<couple_arr[i].bob.boy_id<<endl;          
		//out<<couple_arr[i].couple_id<<" "<<couple_arr[i].bob.boy_id<<" "<<couple_arr[i].gob.girl_id<<endl;
            }
            
     }
      catch( const char* msg )
{
   // catch block
}
    try
    {
        ifstream myfile;
    myfile.open("gift.txt");
 
    
    int i;
    string c;
    string name, type;

    int ng,cs,val;
    myfile>>ng;
    for (i = 1; i <= ng; i++) {
        myfile>>name;
        //cout<<s;
        myfile>>cs;
        myfile>>val;
        
        myfile>>type;
        Gift g(type, cs, val,name);
        gift_arr.push_back(g);
    }
    sort(gift_arr.begin(),gift_arr.end(),cmp1);
    /*for(int k=0;k<gift_arr.size();k++)
    {
        cout<<gift_arr[k].cost<<" "<<gift_arr[k].value<<endl;
    }*/
   /* int y, k,j,x,mc;
       for (k = 0; k < couple_arr.size(); k++) {
            if (couple_arr[k].bob.type=="Miser") {
                mc = couple_arr[k].gob.maintenance_cost;
                j = 0;
                x = 0;
                while (j < mc) {
                    j += gift_arr[x].cost;
                    couple_arr[k].gift_arr.push_back(gift_arr[x]);
                    x++;
                }
            } else if (couple_arr[k].bob.type=="Generous") {
                mc = couple_arr[k].bob.budget;
                j = 0;
                x = 0;
                while (j < mc) {
                    j += gift_arr[x].cost;
                    couple_arr[k].gift_arr.push_back(gift_arr[x]);
                    x++;
                }
            } else {
                mc = couple_arr[k].gob.maintenance_cost;
                j = 0;
                x = 0;
                while (j < mc) {
                    j += gift_arr[x].cost;
                    couple_arr[k].gift_arr.push_back(gift_arr[x]);
                    x++;
                }
                y = couple_arr[k].bob.budget - j;
               for (j = 0; j < gift_arr.size(); j++) {
                    if (gift_arr[j].type=="Luxury" && y >= gift_arr[j].cost) {
                        couple_arr[k].gift_arr.push_back(gift_arr[j]);
                    }
                }
            }
       }
     /* for(i=0;i<couple_arr.size();i++)
         {
         cout<<couple_arr[i].couple_id;
         for(j=0;j<couple_arr[i].gift_arr.size();j++)
         {
         cout<<couple_arr[i].gift_arr[j].gift_id << " ";
         }
         cout<<endl;
         }
    
    }
catch( const char* msg )
{
  
}
    try
    {
	
        int i,j,x,y,mc;
        for (i = 0; i < couple_arr.size(); i++) {
         
            x=0;
            y=0;
            int hapg=0,hapb=0;
            for (j = 0; j < couple_arr.at(i).gift_arr.size(); j++) {
                x+=couple_arr.at(i).gift_arr.at(j).cost;
                y+=couple_arr.at(i).gift_arr.at(j).value;
            }
            mc = couple_arr.at(i).gob.maintenance_cost;
            if(couple_arr.at(i).gob.type=="Choosy")
            {
                hapg=log10(x-mc+2*y);
               
            }
            else if(couple_arr.at(i).gob.type=="Desperate")
            {
                hapg=exp((x-mc)%15);
            
            }
            else
            {
                hapg=x-mc+y;
     
            }
            if(couple_arr.at(i).bob.type=="Miser")
            {
                hapb=abs(couple_arr.at(i).bob.budget-x);
            }
            else if(couple_arr.at(i).bob.type=="Generous")
            {
                hapb=hapg;
            }
            else
            {
                hapb=couple_arr.at(i).gob.intelligence;
            }
            couple_arr.at(i).bob.happiness=hapb;
            couple_arr.at(i).gob.happiness=hapg;
            couple_arr.at(i).happiness=hapb+hapg;
            couple_arr.at(i).compatibility=couple_arr.at(i).bob.budget-mc+abs(couple_arr.at(i).gob.attractiveness-couple_arr.at(i).bob.attractiveness)+abs(couple_arr.at(i).gob.intelligence-couple_arr.at(i).bob.intelligence);
        }
       
        sort(couple_arr.begin(),couple_arr.end(),cmp2);
        out<<"sort by happiness"<<endl;
        for(i=0;i<couple_arr.size();i++){
            out<<"Couple id: "<<couple_arr[i].couple_id<<" Happiness: "<<couple_arr[i].happiness<<endl;
	out<<"Gift Exchanged: "<<endl;	
	for(j=0;j<couple_arr[i].gift_arr.size();j++)
         {
          out<<"Gift Id : "<<couple_arr[i].gift_arr[j].gift_id <<" Gift Value: "<<couple_arr[i].gift_arr[j].value<<" Gift Cost: "<<couple_arr[i].gift_arr[j].cost<<" Gift Type: "<<couple_arr[i].gift_arr[j].type<<endl;
         }
	}
        sort(couple_arr.begin(),couple_arr.end(),cmp3);
        out<<"sort by compatibility"<<endl;
        for(i=0;i<couple_arr.size();i++){
            //out<<couple_arr[i].couple_id<<" "<<couple_arr[i].compatibility<<endl;
     
 out<<"Couple id: "<<couple_arr[i].couple_id<<" Compatibility: "<<couple_arr[i].compatibility<<endl;
	out<<"Gift Exchanged: "<<endl;	
	for(j=0;j<couple_arr[i].gift_arr.size();j++)
         {
         out<<"Gift Id : "<<couple_arr[i].gift_arr[j].gift_id <<" Gift Value: "<<couple_arr[i].gift_arr[j].value<<" Gift Cost: "<<couple_arr[i].gift_arr[j].cost<<" Gift Type: "<<couple_arr[i].gift_arr[j].type<<endl;
         }
 }   }

catch( const char* msg )
{
   // catch block
}
*/

}









