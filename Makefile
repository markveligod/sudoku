NAME = sudoku.exe
SRC = src/main.c src/sudoku.c src/lib.c
INC = includes
OBJ = main.o sudoku.o lib.o

sudoku: object
	gcc -I $(INC) $(OBJ) -o $(NAME)
object:
	gcc -I $(INC) -c $(SRC)
clean:
	del -f $(OBJ) $(NAME)
re: clean sudoku
