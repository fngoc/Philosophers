#ifndef PHILO_ONE_H

# define PHILO_ONE_H

# include <stdio.h>
# include <unistd.h>
# include <pthread.h>
# include <stdlib.h>
# include <sys/time.h>



typedef struct s_philo
{
	int				num;
	int				lfork;
	int				rfork;
	pthread_mutex_t	mutex;
	pthread_t		thread;
}				t_philo;

typedef struct s_data
{
	int		count_philo;
	ssize_t	time_to_die;
	ssize_t	time_to_eat;
	ssize_t	time_to_sleep;
	ssize_t	must_eat;

	t_philo	*array_philo;
}				t_data;

int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size);

#endif