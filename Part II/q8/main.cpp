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
	#include"q8.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"

	using namespace std;

	int main() {
		
		ofstream outfile("Event_Timestamp.csv");
		
		 random_generate r;
         r.data_generate();
         r.gift_generate();

	q8 x;
	x.read();
	Sorting s;
		s.sort_Boy(x.boy_arr);
		s.sort_Girl(x.girl_arr);
		Algorithm a;
		a.algo_pre(x.boy_arr,x.girl_arr,x.couple_arr,x.boy_girl,x.girl_boy,x.cur_gf);

	
	
		
		x.read_gift();
		
		s.sort_gift(x.gift_arr);

		Gift_Allocation* gi;
		Special_Gift_Allocation ggg;
		gi=&ggg;
		gi->allocate_gift(x.couple_arr,x.gift_arr);
		//x.gift_distribute();
		x.calculation();

	
	 /* s.sort_boy(x.couple_arr);
	  

r.boy_name_generate();
Algorithm_Find* al,*fp,*ffp;
//Hash_search algo;
Binary_search algo;

al=&algo;
al->find(x.couple_arr);

Hash_search algol;
fp=&algol;
fp->find(x.couple_arr);
Linear_search algolr;
ffp=&algolr;
ffp->find(x.couple_arr);

*/

	


	    }