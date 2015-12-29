/*
** my_strstr.c for my_strstr.c in /home/afou_n/Github/Piscine/Piscine_C_J06/ex_05
** 
** Made by Afou Nacerdine
** Login   <afou_n@epitech.net>
** 
** Started on  Mon Dec 28 00:02:34 2015 Afou Nacerdine
** Last update Tue Dec 29 15:04:20 2015 Afou Nacerdine
*/

#include <stdlib.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      if (str[i] != to_find[j])
	j = 0;
      else
	j = j + 1;
      if (!to_find[j])
	{
	  i = i - (j - 1);
	  return (str + i);
	}
      i = i + 1;
    }
  return (NULL);
}
