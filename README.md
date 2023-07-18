<div align="center">
    <img src=".github/readme/banner-light.png#gh-light-mode-only" alt="Banner (claro)" />
    <img src=".github/readme/banner-dark.png#gh-dark-mode-only" alt="Banner (oscuro)" />
</div>

<br>

Este proyecto consiste en programar una librería en C.

La librería tendrá un montón de funciones de propósito general en las que se apoyarán mis programas.

<br>

<div align="center">
    <a href='https://profile.intra.42.fr/users/antgalan' target="_blank">
        <img alt='42 (oscuro)' src='https://img.shields.io/badge/Málaga-black?style=flat&logo=42&logoColor=white'/>
    </a>
    <a href='https://projects.intra.42.fr/projects/42cursus-libft/projects_users/2901226' target="_blank">
        <img src="https://img.shields.io/badge/Puntuación-125%20%2F%20100-success?color=%2312bab9&style=flat" />
    </a>
    <a href="https://wakatime.com/@srgalan">
        <img src="https://img.shields.io/badge/wakatime-20 hrs-blue?style=flat&logo=wakatime" alt="Tiempo" />
    </a>
</div>

---


# Parte obligatoria

<table>
  <tr>
    <th>Nombre del programa</th>
    <td><em>libft.a</em></td>
  </tr>
  <tr>
    <th>Archivos a entregar</th>
    <td>Makefile, <code>libft.h</code>, <code>*.c</code></td>
  </tr>
  <tr>
    <th>Makefile</th>
    <td><em>NAME</em>, <em>all</em>, <em>clean</em>, <em>fclean</em>, <em>re</em></td>
  </tr>
  <tr>
    <th>Elementos autorizados</th>
    <td><code>write()</code>, <code>malloc()</code>, <code>free()</code></td>
  </tr>
  <tr>
    <th>Descripción</th>
    <td>Escribe una librería que contenga la función <code>ft_printf()</code> que imite la función <code>printf()</code> original.</td>
  </tr>
</table>

## Consideraciones técnicas

- Declarar variables globales está prohibido.
- Si necesitas separar una función compleja en varias, recuerda usar `static`.
- Pon todos tus archivos en la raíz de tu repositorio.
- Se prohibe entregar archivos no utilizados.
- Todos los archivos `.c` deben compilarse con las *flags* `-Wall -Werror -Wextra`.
- Debes utilizar el comando ar para generar la librería(libtool está prohibido).
- Tu *libft.a* tiene que ser creado en la raíz del repositorio.

## Parte 1 - Funciones de *libc*

Deberás rehacer algunas funciones de la *libc*. Tus funciones tendrán los mismos prototipos e implementarán los mismos comportamientos que las funciones originales.

Deberán ser tal y como las describe el `man`, la única diferencia será la nomenclatura: empezarán con el prefijo *ft_*.

Deberás escribir tus propias funciones implementando las siguientes funciones originales.

No requieren de funciones autorizadas:

<table>
  <tr>
    <td><code>isalpha()</code></td>
    <td><code>isdigit()</code></td>
    <td><code>isalnum()</code></td>
  </tr>
  <tr>
    <td><code>isascii()</code></td>
    <td><code>isprint()</code></td>
    <td><code>strlen()</code></td>
  </tr>
  <tr>
    <td><code>memset()</code></td>
    <td><code>bzero()</code></td>
    <td><code>memcpy()</code></td>
  </tr>
  <tr>
    <td><code>memmove()</code></td>
    <td><code>strlcpy()</code></td>
    <td><code>strlcat()</code></td>
  </tr>
  <tr>
    <td><code>toupper()</code></td>
    <td><code>tolower()</code></td>
    <td><code>strchr()</code></td>
  </tr>
  <tr>
    <td><code>strrchr()</code></td>
    <td><code>strncmp()</code></td>
    <td><code>memchr()</code></td>
  </tr>
  <tr>
    <td><code>memcmp()</code></td>
    <td><code>strnstr()</code></td>
    <td><code>atoi()</code></td>
  </tr>
</table>

Requieren utilizar `malloc()`:

<table>
    <tr>
        <td><code>calloc()</code></td>
        <td><code>strdup()</code></td>
    </tr>
</table>

## Parte 2 - Funciones adicionales

Deberás desarrollar un conjunto de funciones que, o no son de la librería *libc, o lo son pero de una forma distinta.

Implementarás las siguientes funciones:

<table>
  <tr>
    <th>Nombre de la función</th>
    <th>Descripción</th>
  </tr>
  <tr>
    <td><code>ft_substr()</code></td>
    <td>Construye un substring de otro string.</td>
  </tr>
  <tr>
    <td><code>ft_strjoin()</code></td>
    <td>Construye un string como resultado de concatenar 2 strings.</td>
  </tr>
  <tr>
    <td><code>ft_strtrim()</code></td>
    <td>Elimina todos los caracteres de un string, de entre un conjunto de caracteres, hasta encontrar un carácter no perteneciente a dicho conjunto de caracteres.</td>
  </tr>
  <tr>
    <td><code>ft_split()</code></td>
    <td>Construye un array de strings resultante de separar un string en substrings utilizando un carácter como delimitador.</td>
  </tr>
  <tr>
    <td><code>ft_itoa()</code></td>
    <td>Genera una string que representa el valor del entero recibido como argumento.</td>
  </tr>
  <tr>
    <td><code>ft_strmapi()</code></td>
    <td>Aplica una función a cada carácter de un string.</td>
  </tr>
  <tr>
    <td><code>ft_striteri()</code></td>
    <td>Aplica una función a cada carácter de un string con el índice del carácter.</td>
  </tr>
  <tr>
    <td><code>ft_putchar_fd()</code></td>
    <td>Imprime un carácter en un descriptor de archivo específico.</td>
  </tr>
  <tr>
    <td><code>ft_putstr_fd()</code></td>
    <td>Imprime un string en un descriptor de archivo específico.</td>
  </tr>
  <tr>
    <td><code>ft_putendl_fd()</code></td>
    <td>Imprime un string en un descriptor de archivo específico, seguido de un salto de línea.</td>
  </tr>
  <tr>
    <td><code>ft_putnbr_fd()</code></td>
    <td>Imprime un entero en un descriptor de archivo específico.</td>
  </tr>
</table>

# Parte bonus

Las funciones para manipular memoria y strings son muy útiles... Pero pronto descubrirás que la manipulación de listas lo es incluso más.

Deberás utilizar la siguiente estructura para representar un nodo de tu lista.

Añade la declaración a tu archivo `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

- `content`: la información contenida por el nodo, que permite guardar cualquier tipo de información.
- `next`: la dirección del siguiente nodo, o `NULL` si nodo es el último.

Implementa las siguientes funciones para manipular listas:

<table>
  <tr>
    <th>Nombre de la función</th>
    <th>Descripción</th>
  </tr>
  <tr>
    <td><code>ft_lstnew()</code></td>
    <td>Crea un nuevo nodo con el contenido indicado y con <code>next</code> apuntando a <code>NULL</code>.</td>
  </tr>
  <tr>
    <td><code>ft_lstadd_front()</code></td>
    <td>Añade un nuevo nodo al inicio de una lista.</td>
  </tr>
  <tr>
    <td><code>ft_lstsize()</code></td>
    <td>Cuenta el número de nodos de una lista.</td>
  </tr>
  <tr>
    <td><code>ft_lstlast()</code></td>
    <td>Busca el último nodo de la lista.</td>
  </tr>
  <tr>
    <td><code>ft_lstadd_back()</code></td>
    <td>Añade un nuevo nodo al final de una lista.</td>
  </tr>
  <tr>
    <td><code>ft_lstdelone()</code></td>
    <td>Elimina un nodo de una lista.</td>
  </tr>
  <tr>
    <td><code>ft_lstclear()</code></td>
    <td>Elimina una lista al completo.</td>
  </tr>
  <tr>
    <td><code>ft_lstiter()</code></td>
    <td>Recorre la lista y aplica una función al contenido de cada nodo.</td>
  </tr>
  <tr>
    <td><code>ft_lstmap()</code></td>
    <td>Recorre la lista y aplica una función al contenido de cada nodo.</td>
  </tr>
</table>
