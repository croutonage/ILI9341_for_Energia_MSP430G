/*  draw text's APP
    drawChar(INT8U ascii,INT16U poX, INT16U poY,INT16U size, INT16U fgcolor);
    drawString(char *string,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor);
*/

#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>
int brightness = 64;    // how bright the LCD is


void setup()
{
    analogWrite(P2_2, brightness);
    Tft.TFTinit();  // init TFT library
 }

void loop()
{
  Tft.drawNumber(analogRead(TEMPSENSOR),40,0,2,RED,BLACK);
  Tft.drawNumber(analogRead(TEMPSENSOR),40,40,3,GREEN,BLACK);
  Tft.drawNumber(analogRead(TEMPSENSOR),40,80,4,BLUE,BLACK);
  Tft.drawNumber(analogRead(TEMPSENSOR),40,120,2,CYAN,GRAY2);
  Tft.drawNumber(analogRead(TEMPSENSOR),40,160,1,BRIGHT_RED,BLACK);
  Tft.drawNumber(analogRead(TEMPSENSOR),40,200,4,RED,GREEN); 
  
}
