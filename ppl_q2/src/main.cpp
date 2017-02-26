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


}









