# STM32_BluePIill_HD44780_Proteus-Public
STM32CubeIDE 1.10.1, Proteus 8.13

Dot Matrix Liquid Crystal Display HD44780
Not use Arduino Lib

Library Installation :
Download or clone stm32 bluepill for proteus repository.
Open downloaded folder and copy BLUEPILL.IDX and BLUEPILL.LIB file from this folder.
Now open Proteus LIBRARY folder (check your proteus installation folder)
C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY

Now run proteus and open component Library.
Search for "STM32" or "BLUEPILL" and you can see your installed bluepill library.
Source code (Hex) :
Note: Select board as : STM32F103C6 in STM32CUBEMX or in STM32CUBEIDE. Only code compiled for STM32F103C6 is supported with this library.
Command to create hex file in CubeIDE:
arm-none-eabi-objcopy -O ihex ${ProjName}.elf ${ProjName}.hex

Програма для керування символьним дисплеєм на контролері HD44780. Без використання бібліотеки Arduino
Перед початком роботи потрібно встановити необхідні бібліотеки BLUEPILL.IDX та BLUEPILL.LIB для Proteus за шляхом
C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY
При створенні проекту у CubeIDE необхідно обрати МК STM32F103C6
Для генерування hex файлу потрібно в налаштуваннях IDE додати команду
arm-none-eabi-objcopy -O ihex ${ProjName}.elf ${ProjName}.hex
![HD44780](https://user-images.githubusercontent.com/98404943/187026387-a32f42cf-998a-438b-82bf-ff89cbf00af1.png)
![HD44780_stop](https://user-images.githubusercontent.com/98404943/187026415-8828a87a-4baf-4152-9c4a-c7696b58c64a.png)
![CUBE_HD44780](https://user-images.githubusercontent.com/98404943/187026419-acdb8041-7846-447a-90ed-280204346edb.png)
