/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dtoa_sc.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sverschu <sverschu@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/03 14:36:31 by sverschu      #+#    #+#                 */
/*   Updated: 2020/01/03 14:36:33 by sverschu      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DTOA_SC_H
# define FT_DTOA_SC_H

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
** ft_dtoa_sc (put in a separate header because of norminette
** (these would be private/static functions irl)
*/
void		ft_perform_bankers_rounding_sc(double nb, char *worker,
				size_t worker_len);
void		ft_perform_retrospective_rounding_sc(char *worker,
				size_t worker_len, char *master);
void		ft_handle_integer_rounding_sc(unsignedlonglong nb_asint,
				char *master);
void		ft_handle_rounding_sc(double nb, char *worker, char *master);
void		ft_handle_precision_sc(double *nb, int precision,
					char *worker);

#endif
