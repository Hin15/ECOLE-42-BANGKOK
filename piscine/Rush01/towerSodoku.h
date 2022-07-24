/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   towerSodoku.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsrisury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 15:38:32 by dsrisury          #+#    #+#             */
/*   Updated: 2022/07/24 16:07:40 by dsrisury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifdef TOWERSODOKU_H
#define TOWERSDOKU_H
#define SIZE 4

typedef struct s_params
{
	char	up[SIZE];
	char	down[SIZE];
	char	left[SIZE];
	char	right[SIZE];
			t_params;
}

int			arg_ls_valid(char *av, t_params *params);
int			resolve(char grid[SIZE][SIZE],t_params,params);
int			search_empty_case(char grid[SIZE][SIZE],int *x,int *y);
int			can_put_value(char grid[SIZE][SIZE],int *x,int *y,int value);
int			line _ls_valid(char grid[SIZE][SIZE],t_params *params, int y);
int			column_ls_valid(char grid[SIZE][SIZE], t-params *params,int x);
int			calculate_views(char grid[SIZE][SIZE], int pos);
int			print_grid(char grid[SIZE][SIZE]);

#endif

