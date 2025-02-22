/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguttenb <vguttenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:11:58 by vguttenb          #+#    #+#             */
/*   Updated: 2023/03/25 18:58:07 by vguttenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

void	draw_player(t_img *img, int x_pos, int y_pos, int color)
{
	int	x_draw;
	int	y_draw;

	y_draw = y_pos - 2;
	while (++y_draw < y_pos + 2)
	{
		x_draw = x_pos - 2;
		while (++x_draw < x_pos + 2)
			draw_pixel(img, x_draw, y_draw, color);
	}
}
