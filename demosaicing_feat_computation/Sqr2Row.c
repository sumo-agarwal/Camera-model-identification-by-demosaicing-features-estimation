/*=================================================================
 *
 * CoefSmooth.C	Sample .MEX file corresponding to ComputeDelta.M
 *	        Solves simple 3 body orbit problem
 *
 * The calling syntax is:
 *
 *		[yp] = CoefSmooth(C,delta0)
 *
 *  You may also want to look at the corresponding M-code, yprime.m.
 *
 *
 *=================================================================*/

#include <math.h>
#include "mex.h"

/* Input Arguments */

#define II		prhs[0]


/* Output Arguments */
#define	YP_OUT	plhs[0]

static void Sqr2Col(
			double yp[],
			const double I[]
			)
{

	yp[0] = I[10];
	yp[1] = I[6];
	yp[2] = I[11];
	yp[3] = I[16];
	yp[4] = I[2];
	yp[5] = I[7];
	yp[6] = I[12];
	yp[7] = I[17];
	yp[8] = I[22];
	yp[9] = I[8];
	yp[10]= I[13];
	yp[11]= I[18];
	yp[12]= I[14];

}


void mexFunction( int nlhs, mxArray *plhs[],
		  int nrhs, const mxArray*prhs[] )

{

// Input and output parameters
	double  *yp;
    double  *I;

    /* Create a matrix for the return argument */
    YP_OUT = mxCreateDoubleMatrix(1, 13, mxREAL);

    /* Assign pointers to the various parameters */
    yp = mxGetPr(YP_OUT);
	I  = mxGetPr(II);

    /* Do the actual computations in a subroutine */
    Sqr2Col(yp, I);
    return;

}