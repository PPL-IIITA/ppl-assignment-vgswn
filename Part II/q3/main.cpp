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
	#include"q3.h"
#include"../Classes/Gift_Allocation.h"
#include"../Classes/Special_Gift_Allocation.h"
#include"../Classes/Simple_Gift_Allocation.h"

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

	q3 x;
	x.read();
	
	x.makecouples(x.boy_arr,x.girl_arr,x.couple_arr);
	
	x.out();
	x.read_gift();

    sort(x.gift_arr.begin(),x.gift_arr.end(),cmp1);
	x.gift_distribute();
	x.calculation();
 sort(x.couple_arr.begin(),x.couple_arr.end(),cmp2);
x.out1();
  sort(x.couple_arr.begin(),x.couple_arr.end(),cmp3);
x.out2();

    }