# console.color

### Simple and easy-to-use minilibrary for manipulating colors of text and background of output sending to std::cout

Implementation uses WinAPI for Windows and ANSI escape codes for other OSes.


#### Available colors
* black
* red
* green
* yellow
* blue
* cyan
* magenta
* white

all with _normal_ and _bright/bold_ intensity

#### _____
Function **_brighten_** sets bold/bright color only for text.

#### OSes other than Windows
Functions **_set_**, **_color_** and **_bgcolor_** use **aixterm** codes for setting bright colors, if you want to use standard ANSI bold/bright codes please use **_brighten_** function after setting color with _intensity_ parameter set to _normal_.


#### Tested on:
* Windows 10 cmd.exe
* Windows 7 cmd.exe
* Windows PowerShell
* msys
* cygwin 
* ubuntu 16.04


