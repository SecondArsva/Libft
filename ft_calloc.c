/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davidga2 <davidga2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 23:15:15 by davidga2          #+#    #+#             */
/*   Updated: 2023/03/27 20:37:50 by davidga2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <strings.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new_ptr;

	new_ptr = malloc(count * size);
	if (!new_ptr)
		return (0);
	ft_bzero(new_ptr, count * size);
	return (new_ptr);
}
/*
int	main(void)
{
	void	*ptr_char;
	int		*ptr_int;
	
	// "if (!new_ptr)" quiere decir "si new_ptr no existe..."

	// Parece que "calloc" es especialito y pese a que se pueda establecer el
	// el tipo de variable de la memoria a reservar multiplicando el valor a
	// reservar por un sizeof(), según mluis-fu y slegaris, en "calloc" se
	// usa un parámetro para poner el valor a reservar y en otro el tamaño en
	// bytes que use la variable de la que vayamos a reservar valor.
	ptr_char = ft_calloc(5, sizeof(char));
	ptr_int = ft_calloc(5, sizeof(int));
	printf("After: %p\n", ptr);
	return (0);
}*/
