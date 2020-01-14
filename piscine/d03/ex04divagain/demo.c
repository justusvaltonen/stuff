
#include	<stdio.h>

void	local(int *a, int *b);
//result in a, modulo in b
void	local(int *a, int *b)
{
	int local_div = *a / *b;
	int local_mod = *a % *b;
	//a = &local_div;
	//b = &local_mod;
	//printf("Local div: %d\nLocal mod: %d\n", local_div, local_mod);
	*a = local_div;
	*b = local_mod;
}

int	main()
{
	int m_div = 11;
	int m_mod = 3;
	int *p_div;
        p_div = &m_div;
	int *p_mod;
        p_mod = &m_mod;
	printf("Before function\na:%d\nb:%d\n", m_div, m_mod);
	
	local(p_div, p_mod);

	printf("After function\na:%d\nb:%d\n", m_div, m_mod);

	return(0);
}

/*
 *Ehh.. ok, first we pass the memslot of m_div and m_mod to the function named
 local. The contents are 11 and 3. In the local we make couple of integers and
 we give the answers to them (3 and 2).

 Since *a acted as 11 and *b acted as 3 we can assign new values to them (3 and
 2). We will not use &local_div and &local_mod since we don't want to change the
 memory slots the pointers refer to. What is actually happening here is a bit of
 a mystery to me.

 If we don't put the & in main, the compiler tells us that we are making a
 pointer from integer. This seems understandable. It is also understandable why
we would not use & in local since we want to the pointer to refer to ints inside
the main. Why does it work? More testing needs to be done.

Ok, so the pointer first needs to be assigned to a memoryslot before other usage
is allowed. If we uncomment the stuff in local, the link between mains m_div and
m_mod is terminated and pointers a and b refer to other memslots. This is inside
the function local.

Lets try and find out where the pointers inside main refer after the function
has been run. After the function local has run, it should disappear along with
local_div and local_mod.

p_div and p_mod still keep on pointing where they pointed: m_div and m_mod.
Even if we pass the pointers to a function, they work sort of locally. Some sort
of a link is present if we don't re-assing. This is still a bit unclear to me.
 */
