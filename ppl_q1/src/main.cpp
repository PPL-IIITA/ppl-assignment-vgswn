#include<bits/stdc++.h>
#include"Boy.h"
#include"Couples.h"
#include"Girl.h"
#include"random_generate.h"
#include <exception>
#include"q1.h"
using namespace std;


int main() {
	random_generate r;
	q1 x;
	x.read();
	x.makecouples();
	x.out();
	}

   /* vector<Boy>boy_arr;
    vector<Girl> girl_arr;
    vector<Couples> couple_arr;
   ofstream outfile("couples.csv");
	ofstream out;
    out.open("couples.csv");


    random_generate r;
     try
        {
          
    ifstream myfile;
    myfile.open("input.txt");
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
        //cout<<s;
        myfile>>at;
        myfile>>intl;
        myfile>>bud;
        myfile>>type;
        Boy b(name, at, intl, bud, type);
        boy_arr.push_back(b);
    }
     
     
            int j;
            int i;
             for(i=0;i<girl_arr.size();i++){
            //while(j<girl_arr.size())
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
		out<<"Match Found : "   <<couple_arr[i].gob.girl_id<<" and " <<couple_arr[i].bob.boy_id<<endl;          
		//out<<couple_arr[i].couple_id<<" "<<couple_arr[i].bob.boy_id<<" "<<couple_arr[i].gob.girl_id<<endl;
            }
     }
      catch( const char* msg )
{
   // catch block
}




}*/









