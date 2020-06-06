# PillDucky
PillDucky is similar to "Hak5's Rubber Ducky" but for STM32 boards.  

## Introduction  
  
### Requirements  
1. STM32CubeProgrammer    
2. STM32(64KB+)    
3. Arduino IDE  
4. FTDI Breakout board/ST-Link (For Burning Bootloader Only)

### Bootloader  
STM32 boards do not come with bootloader flashed out of the box. However, it is quite easy to burn bootloader.   
The recent [Bootloader 2.2.x](https://github.com/Serasidis/STM32_HID_Bootloader/releases/latest) enables STM32 to work as a HID.  
I would recommend watching "Caleb Marting"'s video. [Caleb Marting's video](https://www.youtube.com/watch?v=Myon8H111PQ), It's a Great video to get started on programming the STM32s through USB, also there are some steps shown in the video which are important for PillDucky to work.  

## Getting Started  
You will have to add the path of "%STM32CubeProgrammer%\bin" to the "paths" of the "System Variables" in order to program the STM32 with the 2.2.x Bootloader.  
Assuming that the new bootloader is flashed, now we can setup our "PilDucky".

### Setting Up PillDucky  
PillDucky works with all the scripts of original "Hak5's Rubber Ducky" except the ones which requires WiFi onboard.   
In order to make "Rubber Ducky" scripts work on PillDucky you will have to use [Duckweeno's Duckuino](https://dukweeno.github.io/Duckuino/) or [d4n5h's Duckuino](https://d4n5h.github.io/Duckuino/) compilers. The compilers are self-explanatory.   
  
### Programming PillDucky  
PillDucky can be programmed from Arduino IDE for that you will need some additional changes in the "Tools" section in the IDE:  
1. USB Support (if avilable):"HID(Keyboad and Mouse)"

**NOTE:** *You will have to move BOOT1 jumper from 0 to 1 position to initialize the bootloader which is required for programming the STM32 board through the micro-USB. After the progamming is done don't forget to move the BOOT1 jumper to 0 position*
