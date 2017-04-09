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
	#include"q4.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"
using namespace std;
using namespace std;
int cmp1(Gift* a,Gift* b)
{
	if(a->cost!=b->cost)
	{
		if(a->cost<b->cost)
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
		if(a->value>b->value)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int cmp2(Couples* a,Couples* b)
{
	if(a->happiness!=b->happiness)
	{
		if(a->happiness>b->happiness)
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
int cmp3(Couples* a,Couples* b)
{
	if(a->compatibility!=b->compatibility)
	{
		if(a->compatibility>b->compatibility)
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
	 r.data_generate();
         r.gift_generate();
  ofstream("happiness.csv");
  ofstream("compatibility.csv");
  ofstream("couples.csv");
  ofstream("new_happiness.csv");
  ofstream("new_compatibility.csv");
  ofstream("new_couples.csv");
 ofstream out,out1,out2;
 ofstream outfile("Event_Timestamp.csv");
  out.open("couples.csv");
	q4 *x=new q4;
	x->read();
	x->makecouples();
	x->output_couples(out);
	out.close();
	x->read_gift();

    sort(x->gift_arr.begin(),x->gift_arr.end(),cmp1);

	x->gift_distribute();
	x->calculation();
 sort(x->couple_arr.begin(),x->couple_arr.end(),cmp2);
  out.open("happiness.csv");
x->output_happiness(out);
out.close();
  sort(x->couple_arr.begin(),x->couple_arr.end(),cmp3);
   out.open("compatibility.csv");
x->output_compatibility(out);
out.close();
x->Break_up();
x->makecouples();
out.open("new_couples.csv");
x->output_couples(out);
out.close();




	x->read_gift();

    sort(x->gift_arr.begin(),x->gift_arr.end(),cmp1);

	x->gift_distribute();
	x->calculation();
 sort(x->couple_arr.begin(),x->couple_arr.end(),cmp2);
  out.open("new_happiness.csv");
x->output_happiness(out);

out.close();
  sort(x->couple_arr.begin(),x->couple_arr.end(),cmp3);
   out.open("new_compatibility.csv");
x->output_compatibility(out);
out.close();



    }