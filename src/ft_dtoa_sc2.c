/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dtoa_sc2.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/10 19:28:59 by sverschu      #+#    #+#                 */
/*   Updated: 2020/06/10 19:29:01 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>
#include <float.h>

#include "libft.h"

#define DTOA_WSIZE 2024
#define DTOA_MAX_PRECISION 100

void		ft_perform_bankers_rounding_sc(double nb, char *worker,
				size_t worker_len)
{
	int					ctr;
	unsignedlonglong	nb_asint;

	ctr = 0;
	nb_asint = (unsignedlonglong)nb;
	while (ctr < DTOA_MAX_PRECISION)
	{
		nb = 10.0 * (nb - nb_asint);
		nb_asint = (unsignedlonglong)nb;
		if (nb_asint > 0)
		{
			worker[worker_len > 0 ? worker_len - 1 : 0]++;
			break ;
		}
		ctr++;
	}
}

void		ft_perform_retrospective_rounding_sc(char *worker,
				size_t worker_len, char *master)
{
	char	*tmp;

	while (worker_len > 0 && worker[worker_len - 1] == '9')
	{
		worker[worker_len - 1] = '0';
		worker_len--;
	}
	if (worker_len == 0)
	{
		tmp = ft_ulltoa_base(ft_strtoull(&master[master[0] == '-' ? 1 : 0],
				NULL, 10) + 1, 10, __lowcase);
		ft_strlcpy(&master[master[0] == '-' ? 1 : 0], tmp, DTOA_WSIZE - 1);
		master[ft_strnlen(master, DTOA_WSIZE)] =
				(worker[0] == '\0') ? '\0' : '.';
		free(tmp);
	}
	else if (worker[0])
		worker[worker_len - 1]++;
}

void		ft_handle_integer_rounding_sc(unsignedlonglong nb_asint,
				char *master)
{
	char *tmp;

	if (nb_asint > 4)
	{
		tmp = ft_ulltoa_base(ft_strtoull(&master[master[0] == '-' ? 1 : 0],
					NULL, 10) + 1, 10, __lowcase);
		ft_strlcpy(&master[master[0] == '-' ? 1 : 0], tmp, DTOA_WSIZE - 1);
		free(tmp);
	}
}

void		ft_handle_rounding_sc(double nb, char *worker, char *master)
{
	unsignedlonglong	nb_asint;
	size_t				worker_len;

	nb_asint = (unsignedlonglong)nb;
	nb = 10.0 * (nb - nb_asint);
	nb_asint = (unsignedlonglong)nb;
	worker_len = ft_strnlen(worker, DTOA_WSIZE);
	if (worker_len == 0)
	{
		ft_handle_integer_rounding_sc(nb_asint, master);
		return ;
	}
	if (nb_asint > 5)
	{
		if (worker[worker_len > 0 ? worker_len - 1 : 0] == '9')
			ft_perform_retrospective_rounding_sc(worker, worker_len, master);
		else
			worker[worker_len > 0 ? worker_len - 1 : 0]++;
	}
	else if (nb_asint == 5)
		ft_perform_bankers_rounding_sc(nb, worker, worker_len);
}

void		ft_handle_precision_sc(double *nb, int precision,
					char *worker)
{
	int					ctr;
	unsignedlonglong	nb_asint;

	ctr = 0;
	nb_asint = (unsignedlonglong)*nb;
	while (ctr < precision)
	{
		*nb = 10.0 * (*nb - nb_asint);
		nb_asint = (unsignedlonglong)*nb;
		worker[ctr] = (char)nb_asint + '0';
		ctr++;
	}
}
