#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

// Default value of 42 for BUFFER_SIZE if not defined during compilation
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// Default value of 1024 for available file descriptors.
// You can check the actual number via 'cat /proc/sys/fs/file-max';
// it's a staggering '9223372036854775807' on my system!
// It is a stretch to allocate an array with this amount of entries, but if
// need be, you can easily adjust while compiling via the '-D FD_SIZE_=n' flag.
# ifndef FD_SIZE
#  define FD_SIZE 1024
# endif

# include <stdlib.h> // malloc(), free()
# include <unistd.h> // read()
# include <stddef.h> // size_t
# include <stdint.h> // SIZE_MAX

char	*ft_stash_buf_join(char *stash, char *buffer); // in utils
char	*ft_strchr(const char *s, int c); // in utils
char	*ft_trim_until_newline(char *stash); // in utils
void	*ft_calloc(size_t nmemb, size_t size);
char	*get_next_line(int fd);

#endif
