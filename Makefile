
# tutorial makefile -> https://www.youtube.com/watch?v=0XlVyZAfQEM
# tutorial 2 completo -> https://makefiletutorial.com/
# tutorial makefile -> https://42-cursus.gitbook.io/guide/useful-tools/header-files
# creacion biblioteca con makefile -> https://medium.com/@Anatolii_Zhadan/makefile-to-create-a-library-in-c-3c2ad3d281
# guia Cursus 42 -> https://42-cursus.gitbook.io/guide/rank-00/libft

# VARIABLES -----------------------------------------
# ---------------------------------------------------

# nombre compilador
CC := clang

# flags para compilacion
CFLAGS := -Wall -Wextra -Werror

# listado funciones a incluir en biblioteca
SRC := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	ft_strlen.c ft_toupper.c ft_tolower.c ft_strlcat.c ft_strlcpy.c \
	ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
	ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_itoa.c ft_split.c \

BONUS := ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

# Nombre salida archivo biblioteca
NAME := libft.a

# OBLIGATORIA -> lista nombres archivos .o en base a archivos .c para generar programa
OBJ_FILES := $(SRC:%.c= %.o)	

# BONUS -> lista nombres archivos .o en base a archivos .c para generar programa
OBJ_FILES_BONUS := $(BONUS:%.c= %.o)	

### RECETAS -----------------------------------------
# ---------------------------------------------------

# all -> receta predeterminada para crear producto ppal de la compilacion
# all: $(NAME) clean
all: $(NAME)

# funcion ppal ->  CREACION ARCHIVO LIBRERIA estatica '.a'
# opciones 'AR' -r --> reemplazar o agregar archivos al archivo
# opciones 'AR' -c --> crear el archivo si no existe
# opciones 'AR' -s --> escribir un índice en el archivo para acelerar búsquedas
$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

# Receta para incorporar a archivo biblitoteca libft.a con archivos bonus
bonus: ${NAME} ${OBJ_FILES_BONUS}
	ar rcs ${NAME} ${OBJ_FILES_BONUS}

# comando borrar archivos '.o' -> '-f' ignora error si no encuentra archivos y elimina sin solicitar confirmacion
clean:
	rm -f $(OBJ_FILES) $(OBJ_FILES_BONUS)

# ejecuta 1º clean y despues borrado programa Libft.a
fclean: clean 
	rm -f $(NAME)

# funcion 'RECONSTRUCCION'-> recompila de nuevo el archivo y las recetas anteriores fclean -> clean
# 1º elimina todos los archivos '.o' y archivo biblioteca
# 2º nueva compilacion con $(NAME)
re: fclean all

# .PHONY -> evita q entienda las recetas como archivo salida. Lo entiende como acciones que siempre se ejecutan, independientemente de la presencia de un archivo con el mismo nombre que el objetivo
.PHONY: all bonus clean fclean re