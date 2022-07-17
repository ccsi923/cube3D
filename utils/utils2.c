/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:42:01 by emgarcia          #+#    #+#             */
/*   Updated: 2022/07/17 17:22:49 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

void	ft_printraycast(t_raycast *r)
{
	printf("camera_x: %f\n", r->camera_x);
	printf("raydir_x: %f\n", r->raydir_x);
	printf("raydir_y: %f\n", r->raydir_y);
	printf("delta_dist_x: %f\n", r->delta_dist_x);
	printf("delta_dist_y: %f\n", r->delta_dist_y);
	printf("side_dist_x: %f\n", r->side_dist_x);
	printf("side_dist_y: %f\n", r->side_dist_y);
	printf("draw-start: %d\n", r->draw_start);
	printf("draw-end: %d\n", r->draw_end);
	printf("\n");
}

void	ft_closewindow(t_general *g)
{
	ft_freeall(g);
	exit(0);
}

float	ft_torad(float grad)
{
	return (grad * RADGR);
}
