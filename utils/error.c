/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:47:28 by vguttenb          #+#    #+#             */
/*   Updated: 2023/03/25 18:59:43 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

void	error(char *str, t_general *g)
{
	printf("Error\n");
	printf("%s\n", str);
	free_all(g);
	exit(0);
}
