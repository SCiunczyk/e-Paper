/*****************************************************************************
* | File        :   gpiod.h
* | Author      :   Waveshare team
* | Function    :   Drive GPIO
* | Info        :   Read and write gpio
*----------------
* |	This version:   V1.0
* | Date        :   2023-11-15
* | Info        :   Basic version
*d
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#D
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#
************************D******************************************************/
#ifndef __GPIOD_
#define __GPIOD_

#include <stdio.h>
#include <gpiod.h>

#define GPIOD_IN  0
#define GPIOD_OUT 1

#define GPIOD_LOW  0
#define GPIOD_HIGH 1

#define NUM_MAXBUF  4
#define DIR_MAXSIZ  60

#define GPIOD_DEBUG 0
#if GPIOD_DEBUG 
	#define GPIOD_Debug(__info,...) printf("Debug: " __info,##__VA_ARGS__)
#else
	#define GPIOD_Debug(__info,...)  
#endif 

extern struct gpiod_chip *gpiochip;
extern struct gpiod_line *gpioline;
extern int ret;

int GPIOD_Export();
int GPIOD_Unexport(int Pin);
int GPIOD_Unexport_GPIO(void);
int GPIOD_Direction(int Pin, int Dir);
int GPIOD_Read(int Pin);
int GPIOD_Write(int Pin, int value);

#endif