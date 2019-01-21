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

#define II1		prhs[0]
#define II2     prhs[1]


/* Output Arguments */
#define	YP_OUT	plhs[0]

static void Sqr2TwoRow(
			double yp[],
			const double I1[],
			const double I2[]
			)
{

	yp[0] = I1[10];
	yp[1] = I1[6];
	yp[2] = I1[11];
	yp[3] = I1[16];
	yp[4] = I1[2];
	yp[5] = I1[7];
	yp[6] = I1[12];
	yp[7] = I1[17];
	yp[8] = I1[22];
	yp[9] = I1[8];
	yp[10]= I1[13];
	yp[11]= I1[18];
	yp[12]= I1[14];

	yp[13] = I2[10];
	yp[14] = I2[6];
	yp[15] = I2[11];
	yp[16] = I2[16];
	yp[17] = I2[2];
	yp[18] = I2[7];
	yp[19] = I2[12];
	yp[20] = I2[17];
	yp[21] = I2[22];
	yp[22] = I2[8];
	yp[23]= I2[13];
	yp[24]= I2[18];
	yp[25]= I2[14];

}


void mexFunction( int nlhs, mxArray *plhs[],
		  int nrhs, const mxArray*prhs[] )

{

// Input and output parameters
	double  *yp;
    double  *I1, *I2;

    /* Create a matrix for the return argument */
    YP_OUT = mxCreateDoubleMatrix(1, 26, mxREAL);

    /* Assign pointers to the various parameters */
    yp = mxGetPr(YP_OUT);
	I1 = mxGetPr(II1);
	I2 = mxGetPr(II2);

    /* Do the actual computations in a subroutine */
    Sqr2TwoRow(yp, I1, I2);
    return;

}