/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmbexe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 14:10:00 by tmbexe            #+#    #+#             */
/*   Updated: 2020/06/21 14:12:41 by tmbexe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_ft(int *nbr){ 

	 *nbr = 42;
} 

int main(){

	/* This code was for testing purposes
	int num1 = 5;
	int *myPointer = &num1;
	 ft_ft(myPointer);
	*/
	int nbr;

	ft_ft(&nbr);
	return 0;
}
