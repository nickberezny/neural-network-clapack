#include "blaswrap.h"
#include "f2c.h"
#include "clapack.h"
#include <math.h>

int neuron(int size, double * w, double * x, double b, double y)
{
	//ReLu activation 
	*y = ddot_(size,w,0,x,0) + b;
	if(*y < 0.0) y = 0.0;
	return 0;
}

int layer(int size, double * ws, double * x, double * bs)
{
	for(int i = 0; i < size; i++)
	{
		neuron(size, ws[i], x, bs[i],);
	}
}