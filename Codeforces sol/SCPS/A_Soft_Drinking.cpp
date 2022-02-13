/******************************************************************************
Author : Akhil Kathuria ❤

*******************************************************************************/
#include<bits/stdc++.h>
#include <iostream>
#define ll long long 
using namespace std;
void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}
int main()
{
    // c_p_c();
    double n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    double nl_wehave = k*l;
    double slices_of_lime_we_have = c * d;
    double salt_we_have = p ;
    double sa = (double)min(nl_wehave/nl,min(slices_of_lime_we_have,p/np))/n;
    cout<<floor(sa);
    return 0;
}
/*
This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?

Input
The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000 and no less than 1. The numbers are separated by exactly one space.

Output
Print a single integer — the number of toasts each friend can make.
n = 3 (no of people in group)
k = 4 (bottles of soft drink)
l = 5 (milliliters of drink in each bottle)
c = 10 (total limes available)
d = 8 ( lime cut down into d slices )
p = 100 ( Total grams of salt available )
nl = 3 ( each friend needs nl milliliters of drink to make toast )
np = 1 ( grams Of salt required to make a toast )
we require 
nl milliliters of the drink, a slice of lime and np grams of salt
nl_wehave = 3*5 (n*l)
slices_of_lime_we_have = total limes * slices of each limes
                       = c * d (10*8)
salt_we_have = p (100)

min(nl_wehave/nl,min(slices_of_lime_we_have,p/np));

*/