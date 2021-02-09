/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ldtoa.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/21 19:24:54 by sverschu      #+#    #+#                 */
/*   Updated: 2019/12/30 00:32:24 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LDTOA_H
# define FT_LDTOA_H

# define DTOA_WSIZE 2024
# define DTOA_MAX_PRECISION 100

/*
** C89 doesn't define longlong's (introduced in C99)
*/
#ifndef C89_LONGLONG
# define C89_LONGLONG

typedef uint64_t	unsignedlonglong;
typedef int64_t		longlong;
#undef  LLONG_MIN
#undef  LLONG_MAX
#undef  ULLONG_MAX
#undef __LONG_LONG_MAX__

#define __LONG_LONG_MAX__ sizeof(int64_t)
#define LLONG_MAX  __LONG_LONG_MAX__
#define LLONG_MIN  (-__LONG_LONG_MAX__-1)
#define ULLONG_MAX (__LONG_LONG_MAX__*2+1)
#endif

/*
** ft_ldtoa2.c (put in a separate header because of norminette
** (these would be private/static functions irl)
*/
void	ft_perform_bankers_rounding(long double nb, char *worker,
			size_t worker_len);
void	ft_perform_retrospective_rounding(char *worker,
			size_t worker_len, char *master);
void	ft_handle_integer_rounding(unsignedlonglong nb_asint,
			char *master);
void	ft_handle_rounding(long double nb, char *worker, char *master);

#endif
