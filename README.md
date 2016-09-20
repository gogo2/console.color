# console.color

### Simple and easy-to-use minilibrary for manipulating colors of text and background of output sending to std::cout

Implementation uses WinAPI for Windows and ANSI escape codes for other OSes.


####___
Function **_bright_** sets bold/bright color only for text.

####Other OSes
Functions **_set_**, **_color_** and **_bgcolor_** use **aixterm** codes for setting bright colors, if you want to use standard ANSI bold/bright codes please use **_bright_** function after setting color with false _bright_ parameter.


####Tested on:
* Windows 10 cmd.exe
* Windows 7 cmd.exe
* Windows PowerShell
* msys
* cygwin 
* ubuntu 16.04


