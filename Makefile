
# tutorial makefile -> https://www.youtube.com/watch?v=0XlVyZAfQEM
# tutorial 2 completo -> https://makefiletutorial.com/
# tutorial makefile -> https://42-cursus.gitbook.io/guide/useful-tools/header-files
# creacion biblioteca con makefile -> https://medium.com/@Anatolii_Zhadan/makefile-to-create-a-library-in-c-3c2ad3d281
# guia Cursus 42 -> https://42-cursus.gitbook.io/guide/rank-00/libft

# VARIABLES -----------------------------------------

# nombre compilador
CC := cc

# flags para compilacion
CFLAGS := -Wall -Wextra -Werror

# Nombre salida archivo biblioteca
NAME := libft.a

# listado funciones a incluir en biblioteca
SRC := ft_isalpha.c ft_isdigit.c

# lista nombres archivos .o en base a archivos .c para generar programa
OBJ_FILES := $(SRC:%.c= %.o)	

### RECETAS -----------------------------------------

# funcion ppal ->  CREACION ARCHIVO LIBRERIA estatica '.a'
# opciones 'AR' -r --> reemplazar o agregar archivos al archivo
# opciones 'AR' -c --> crear el archivo si no existe
# opciones 'AR' -s --> escribir un índice en el archivo para acelerar búsquedas
$(NAME): $(OBJ_FILES)
	AR rcs $(NAME) $(OBJ_FILES)

# all -> receta predeterminada para crear producto ppal de la compilacion
# all: $(NAME) clean
all: $(NAME)

# comando borrar archivos '.o' -> '-f' ignora error si no encuentra archivos y elimina sin solicitar confirmacion
clean:
	rm -f $(OBJ_FILES)

# ejecuta 1º clean y despues borrado programa Libft.a
fclean: clean 
	rm -f $(NAME)

# funcion 'RECONSTRUCCION'-> recompila de nuevo el archivo y las recetas anteriores fclean -> clean
# 1º elimina todos los archivos '.o' y archivo biblioteca
# 2º nueva compilacion con $(NAME)
re: fclean all

# .PHONY -> evita q entienda las recetas como archivo salida. Lo entiende como acciones que siempre se ejecutan, independientemente de la presencia de un archivo con el mismo nombre que el objetivo
.PHONY: all clean fclean re