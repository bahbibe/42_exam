int ft_get_n(char c, int str_base)
{
	int max = 0;
	if (str_base < 10) max = str_base + '0';
	else max = str_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max) return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max) return (c + 10 - 'a');
	else return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int ret = 0, sign = 1, n = 0, i =0;
	if (str[i] == '-') sign *= -1, i++;
	while ((n = ft_get_n(str[i] + (32 * (str[i] > 'A' && str[i] < 'F')), str_base)) > -1)
		ret = ret * str_base + n * sign, i++;
	return (ret);
}