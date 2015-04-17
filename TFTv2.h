/*
 2012 Copyright (c) Seeed Technology Inc.

 Authors: Albert.Miao & Loovee, 
 Visweswara R (with initializtion code from TFT vendor)

 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/*

For MSP430 Launchpad Tested on MSP430G2553
Modified by Radoslav Malinov  January 2014

*/

#define TFTv2_h

#define SEEEDUINO
#include <Arduino.h>
#include <SPI.h>
#include <stdint.h>

#define TFT_CS_LOW  {pinMode(P2_0, OUTPUT); digitalWrite(P2_0, LOW);}
#define TFT_CS_HIGH {pinMode(P2_0, OUTPUT); digitalWrite(P2_0, HIGH);}
#define TFT_DC_LOW  {pinMode(P1_4, OUTPUT); digitalWrite(P1_4, LOW);}
#define TFT_DC_HIGH {pinMode(P1_4, OUTPUT); digitalWrite(P1_4, HIGH);}
#define TFT_BL_OFF  {pinMode(P2_2, OUTPUT); digitalWrite(P2_2, LOW);}
#define TFT_BL_ON   {pinMode(P2_2, OUTPUT); digitalWrite(P2_2, HIGH);}
#define TFT_RST_OFF {pinMode(P1_0, OUTPUT); digitalWrite(A0, LOW);}
#define TFT_RST_ON  {pinMode(P1_0, OUTPUT); digitalWrite(A0, HIGH);}


//#define YP A2   // must be an analog pin, use "An" notation!
//#define XM A1   // must be an analog pin, use "An" notation!
//#define YM 14   // can be a digital pin, this is A0
//#define XP 17   // can be a digital pin, this is A3

//Basic Colors
#define RED		0xf800
#define GREEN		0x07e0
#define BLUE		0x001f
#define BLACK		0x0000
#define YELLOW		0xffe0
#define WHITE		0xffff

//Other Colors
#define CYAN		0x07ff	
#define BRIGHT_RED	0xf810	
#define GRAY1		0x8410  
#define GRAY2		0x4208 

//TFT resolution 240*320
#define MIN_X		0
#define MIN_Y		0
#define MAX_X		239
#define MAX_Y		319

#define TS_MINX 116*2
#define TS_MAXX 890*2
#define TS_MINY 83*2
#define TS_MAXY 913*2

#ifndef INT8U
#define INT8U unsigned char
#endif
#ifndef INT16U
#define INT16U unsigned int
#endif

extern INT8U simpleFont[][8];

class TFT
{
public:
	void TFTinit (void);
	void setCol(INT16U StartCol,INT16U EndCol);
	void setPage(INT16U StartPage,INT16U EndPage);
	void setXY(INT16U poX, INT16U poY);
	void setPixel(INT16U poX, INT16U poY,INT16U color);
	void sendCMD(INT8U index);
	void WRITE_Package(INT16U *data,INT8U howmany);
	void WRITE_DATA(INT8U data);
	void sendData(INT16U data);
	INT8U Read_Register(INT8U Addr,INT8U xParameter);
	void fillScreen(INT16U XL,INT16U XR,INT16U YU,INT16U YD,INT16U color);
	void fillScreen(void);
	INT8U readID(void);

	void drawChar(INT8U ascii,INT16U poX, INT16U poY,INT16U size, INT16U fgcolor, INT16U bgcolor);
	void drawString(char *string,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor, INT16U bgcolor);
	void fillRectangle(INT16U poX, INT16U poY, INT16U length, INT16U width, INT16U color);

	void drawLine(INT16U x0,INT16U y0,INT16U x1,INT16U y1,INT16U color);
	void drawVerticalLine(INT16U poX, INT16U poY,INT16U length,INT16U color);
	void drawHorizontalLine(INT16U poX, INT16U poY,INT16U length,INT16U color);
	void drawRectangle(INT16U poX, INT16U poY, INT16U length,INT16U width,INT16U color);

	void drawCircle(int poX, int poY, int r,INT16U color);
	void fillCircle(int poX, int poY, int r,INT16U color);

	void drawTraingle(int poX1, int poY1, int poX2, int poY2, int poX3, int poY3, INT16U color);
	INT8U drawNumber(long long_num,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor, INT16U bgcolor);
	INT8U drawFloat(float floatNumber,INT8U decimal,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor, INT16U bgcolor);
	INT8U drawFloat(float floatNumber,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor, INT16U bgcolor);

};

extern TFT Tft;


/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
