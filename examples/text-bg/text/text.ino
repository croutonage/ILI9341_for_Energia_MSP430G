/*  draw text's APP
    drawChar(INT8U ascii,INT16U poX, INT16U poY,INT16U size, INT16U fgcolor, INT16U bgcolor);
    drawString(char *string,INT16U poX, INT16U poY,INT16U size,INT16U fgcolor, INT16U bgcolor);
*/

#include <stdint.h>
#include <TFTv2.h>
#include <SPI.h>

void setup()
{
    TFT_BL_ON;      // turn on the background light
    Tft.TFTinit();  // init TFT library
    
    Tft.drawChar('S',0,0,1,RED,BLACK);                // draw char: 'S', (0, 0), size: 1, color: RED, bgcolor BLACK
    
    Tft.drawChar('E',10,10,2,BLUE,BLACK);             // draw char: 'E', (10, 10), size: 2, color: BLUE, bgcolor BLACK
    
    Tft.drawChar('E',20,40,3,GREEN,RED);            // draw char: 'E', (20, 40), size: 3, color: GREEN, bgcolor RED
    
    Tft.drawChar('E',30,80,4,YELLOW,BLUE);           // draw char: 'E', (30, 80), size: 4, color: YELLOW, bgcolor BLUE
    
    Tft.drawChar('D',40,120,4,YELLOW,BLACK);          // draw char: 'D', (40, 120), size: 4, color: YELLOW, bgcolor BLACK
    
    Tft.drawString("Hello",0,180,3,CYAN,BLACK);       // draw string: "hello", (0, 180), size: 3, color: CYAN, bgcolor BLACK
    
    Tft.drawString("World!!",60,220,4,WHITE,GRAY2);    // draw string: "world!!", (80, 230), size: 4, color: WHITE, bgcolor GRAY2
    

}

void loop()
{
  
}
