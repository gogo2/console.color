# console.color

## Simple and easy-to-use minilibrary for manipulating colors of text and background of output sending to std::cout

Implementation uses ASCCI escapoe codes.

Functions **_set_**,**_color_** and **_bgcolor_** use **aixterm** codes for setting bright colors, if you want to use standard ASCII bold/bright codes please use **_bright_** function after setting color with false _bright_ parameter.


Tested on Windows PowerShell and ubuntu 16.04


Doesn't work on Windows cmd.exe, but stay tuned!