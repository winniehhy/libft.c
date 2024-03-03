#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		len;
	int		i;

	len = ft_strlen(s1);
	i = 0;
	dup = malloc((sizeof(char) * len) + 1);
	if (!dup)
		return (NULL);
	while (s1[i] != '\0')
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while(s[count])
	count++;
	return(count);

}

int main()
{
    const char *originalString = "Hello!";
    char *duplicateString = ft_strdup(originalString);

    if (duplicateString)
    {
        printf("Original: %s\n", originalString);
        printf("Duplicate: %s\n", duplicateString);

        free(duplicateString);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
