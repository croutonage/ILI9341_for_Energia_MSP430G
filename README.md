
Based on IBM666/ILI9341libraryforEnergiaMSP430Launchpad, Which is based on Seeed ILI9341 2.2 TFT+SD library

IBM666 removed the bgcolor feature, which saved some ram and speeds things up a lot,
However I need frequently updating text, and manually wiping the old characters was a pain for me, so it's back in with this fork.
All functions that use a font (text, numbers) now have an extra last parameter, which sets the background color behind the text.

Applies to this type screen with ILI9341 controller built in. 

http://www.aliexpress.com/item/New-2-2-inch-2-2-240x320-SPI-TFT-LCD-Display-Module-ILI9341-PCB-5V-3/32237378199.html

Pinout:

P2_0 -> LCD_CS
P1_4 -> LCD_DC
P2_2 -> LCD_LED (pwm capable, can use analogWrite(P2_2, 64) between 0->255 to dim LCD
P1_0 -> LCD_RESET
P1_5 -> LCD_SCK
P1_7 -> LCD_MOSI
P1_6 -> LCD_MISO
VCC -> LCD_VCC
GND -> LCD_GND