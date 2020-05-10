# SUDOKU  
## TASK
Write a program for a possible solution to the Sudoku game.  
Handle all sorts of errors.  
Arguments are passed via the command line.  
For example:  
```
sudoku.exe line1 line2 line3 line4 line5 line6 line7 line8 line9
```  
## Errors  
1. Error in submitting arguments in the command line.  
![](https://github.com/markveligod/sudoku/raw/master/img/img1.png) 
2. Error of duplicated numbers horizontally.  
![](https://github.com/markveligod/sudoku/raw/master/img/img2.png) 
3. Error of duplicated numbers vertically.  
![](https://github.com/markveligod/sudoku/raw/master/img/img3.png) 
## Example:  
**Unfortunately my solution algorithm only works for light levels.**
![](https://github.com/markveligod/sudoku/raw/master/img/img.png)  
## Other  
**The Makefile is made for the Windows operating system.**
```
make sudoku (the command creates a program)
make clean (the command deletes the program)
make re (the command deletes the old program and creates a new)
```  
  
Author - _Mark Veligod_  
