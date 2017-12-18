/******************************************************************************
*
* Copyright (C) 2014 - 2017 Xilinx, Inc. All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

/*****************************************************************************/
/**
* @file sleep.h
*
*  This header file contains ARM Cortex A53,A9,R5,Microblaze specific sleep
*  related APIs.
*
* <pre>
* MODIFICATION HISTORY :
*
* Ver   Who  Date	 Changes
* ----- ---- -------- -------------------------------------------------------
* 6.6   srm  11/02/17 Added processor specific sleep rountines
*								 function prototypes.
*
* </pre>
*
******************************************************************************/

#ifndef SLEEP_H
#define SLEEP_H

#include "xil_types.h"
#include "xil_io.h"

#ifdef __cplusplus
extern "C" {
#endif

void usleep(unsigned long useconds);
void sleep(unsigned int seconds);
int usleep_R5(unsigned long useconds);
unsigned sleep_R5(unsigned int seconds);
int usleep_MB(unsigned long useconds);
unsigned sleep_MB(unsigned int seconds);
int usleep_A53(unsigned long useconds);
unsigned sleep_A53(unsigned int seconds);
int usleep_A9(unsigned long useconds);
unsigned sleep_A9(unsigned int seconds);

#ifdef __cplusplus
}
#endif

#endif
