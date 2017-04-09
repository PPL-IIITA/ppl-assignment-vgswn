	#include<bits/stdc++.h>
	#include"../Classes/Boy.h"
#include"../Classes/Couples.h"
#include"../Classes/Girl.h"
#include"../Classes/Normal.h"
#include"../Classes/Choosy.h"
#include"../Classes/Desperate.h"
#include"../Classes/Miser.h"
#include"../Classes/Geeks.h"
#include"../Classes/Generous.h"
#include"../Classes/random_generate.h"
#include"../Classes/Couples.h"
#include <exception>
#include"../Classes/Luxury.h"
#include"../Classes/Utility.h"
#include"../Classes/Essential.h"
#include"../Classes/Algorithm.h"
#include"../Classes/Sorting.h"
	#include"q5.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"
using namespace std;

int main() {
	
	 random_generate r;
	   r.data_generate();
         r.gift_generate();
ofstream outfile("Event_Timestamp.csv");
	q5 x;
	x.read();
	Sorting s;
	s.sort_Boy(x.boy_arr);
	s.sort_Girl(x.girl_arr);
	Algorithm a;
	a.algo_new(x.boy_arr,x.girl_arr,x.couple_arr,x.boy_girl,x.girl_boy,x.cur_gf);
	//a.algo_pre(x.boy_arr,x.girl_arr,x.couple_arr,x.boy_girl,x.girl_boy,x.cur_gf);
	x.out();
	x.read_gift();
	
	s.sort_gift(x.gift_arr);



   
	x.gift_distribute();
	x.calculation();
 s.sort_happiness(x.couple_arr);
x.out1();
  s.sort_compatibility(x.couple_arr);
x.out2();

    }