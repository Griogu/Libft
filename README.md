# Libft avant modification
Premiere partie
|Nom|Description|
|--|--|
| ft_isalpha | Cette fontion permet de verifier si un caractere est alphabetique ou non en renvoyant 1 si oui et 0 sinon.|
| ft_isdigit | Cette fonction permet de verifier si un caractere est numerique ou non en renvoyant 1 si oui et 0 sinon.|
| ft_isalnum | Cette fonction permet de verifier si un caractere est alphamumerique ou non en renvoyant 1 si oui et 0 sinon.|
| ft_isascii | Cette fonction permet de verifier si un caractere fait parti de la table ascii ou non en renvoyant 1 et 0 sinon.|
| ft_isprint | Cette fonction permet de verifier si un caractere est imprimable ou non en renvoyant 1 si oui et 0 sinon.|
| ft_strlen | Cette fonction retourne la taille d'une string.|
| ft_memset | Cette fonction permet de remplacer n nombres de caractere par le caractere c dans la string s et renvoit le resultat.|
| ft_memcpy | Cette fonction permet de copier n nombres de caracteres de la string src dans la string dest et renvoit le resultat.|
| ft_memmove | Cette fonction permet de copier n nombres de caracteres de la string src dans la string dest en evitant le chevauchement et renvoit le resultat.|
| ft_memchr | Cette fonction permet de rechercher un caractere c dans la string s et renvoit la string a l'index ou elle a trouve le caractere et renvoit 0 si elle ne le trouve pas.|
| ft_memcmp | Cette fonction permet de comparer deux string et renvoit la difference entre les caractere compares s'ils ne sont pas identique et 0 s'ils le sont.|
| ft_bzero | Cette fonction permet de remplir une string de '\0'.|
| ft_strlcpy | Cette fonction permet de copier size - 1 caractere de la string src dans la string dst et d'en retourner le resultat.|
| ft_strlcat | Cette fonction permet de concatener size caractere de la la string src a la string dst et d'en retourner le resultat.|
| ft_toupper | Cette fonction permet de transformer les minuscules en majuscules.|
| ft_tolower | Cette fonction permet de transformer les majuscules en minuscules.|
| ft_strchr | Cette fonction permet de retourner la string s a partir de la premiere occurence du caractere c s'il est dans la string s, sinon il retourne NULL.|
| ft_strrchr | Cette fonction permet de retourner la string s a partir de la derniere occurence du caractere c s'il est dans la string s, sinon il retourne NULL.|
| ft_strnstr | Cette fonction permet de retourner la string big a la premiere occurence de la string little s'il elle est dans big, sinon elle retourne NULL.|
| ft_strncmp | Cette fonction permet de retourner la difference entre deux caracteres de la string s1 et s2 avec n comparaisons.|
| ft_atoi | Cette fonction permet de transformer des caracteres en int et retourne le resultat.|
| ft_calloc | Cette fonction retourne une string de taille (nmemb * size) et la remplie de '\0'.|
| ft_strdup | Cette fonction retourne une duplication d'une string passe en parametre et la retourne.|

Deuxieme partie
|Nom|Description|
|--|--|
| ft_substr | Cette fonction retourne une string contenant les caracteres de la string s a partir du pointeur start.|
| ft_strjoin | Cette fonction retourne une nouvelle string resultat de la concatenation de la string s1 et s2.|
| ft_strtrim | Cette fonction coupe la string s1 au debut et a la fin avec les caracteres de la string set et retourne le resultat.|
| ft_split | Cette fonction retourne un tableau de string, resultat de la separation de la string s avec le caractere c.|
| ft_itoa | Cette fonction transforme des int en caractere et retourne le resultat.|
| ft_strmapi | Cette fonction appliquer la fonction f sur chacun des caracteres de la string s et retourne le resultat.|
| ft_striteri | Cette fonction applique la fonction f sur chacun des charactere de la string s.|
| ft_putchar_fd | Cette fonction ecrit le caractere c dans le file descriptor donne.|
| ft_putstr_fd | Cette fonction ecrit la string s dans le file descriptor donne.|
| ft_putendl_fd | Cette fonction ecrit la string s suivi d'un '\n' dans le file descriptor donne.|
| ft_putnbr_fd | Cette fonction ecrit un int n dans le file descriptor donne.|

Partie bonus
|Nom|Description|
|--|--|
| ft_lstnew | Cette fonction cree un nouveau noeud, attribue attribue au content celui passe en parametres et la fait pointer vers NULL.|
| ft_lstadd_front | Cette fonction ajoute un nouveau noeud au debut de la liste lst.|
| ft_lstsize | Cette fonction retourne le nombre de noeud dans une liste.|
| ft_lstlast | Cette fonction retourne un pointeur sur le dernier noeud de la liste.|
| ft_lstadd_back | Cette fonction ajoute un nouveau noeud a la fin de la liste lst.|
| ft_lstdelone | Cette fonction efface la memoire d'un noeud avec la fonction del passe en parametre et free le noeud.|
| ft_lstclear | Cette fonction efface la memoire de toute la liste en utilisant la fonction del passe en parametre et free chaque noeud, le pointeur sur cette liste devient NULL.|
| ft_lstiter | Cette fonction applique la fonction f sur le contenu de chaque noeud de la liste.|
| ft_lstmap | Cette fonction applique la fonction f sur le contenu de chaque noeud de la liste et creer une nouvelle liste, resultat de cette application, cette fonction utilise la fonction del passe en parametre pour tout effacer s'il y a un probleme.|
