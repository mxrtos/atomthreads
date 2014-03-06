/***********************************************************************/
/*                                                                     */
/*  FILE        :vector.h                                              */
/*  DATE        :Thu, Feb 27, 2014                                     */
/*  DESCRIPTION :define the top address of the interrupt vectors.      */
/*  CPU GROUP   :80                                                    */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.18).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/***********************************************************************/

/*********************************************************************
 *  STARTUP for M32C/9X
 *  Copyright (C) 2004 (2010) Renesas Electronics Corporation.
 *  and Renesas Solutions Corporation. All rights reserved.                             *
 *
 *  vector.h : define address for vector
 *
 * Function:define variable vector's address
 *	    define fixed vector's address
 *
 * $Date: 2005/11/01 04:35:51 $
 * $Revision: 1.4 $
 ********************************************************************/
////////////////////////////////////////////
// declare sfr register using in "resetprg.c"


#define Fvectaddr       0xffffdc
#ifndef VECTOR_ADR
#define VECTOR_ADR	0x0fffd00
#endif