/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:42:15 by emaravil          #+#    #+#             */
/*   Updated: 2023/11/01 15:34:16 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int ft_str_is_uppercase(char *str);

// int main()
// {
//     char e[40] = "asfsgadASDSDs12213123fd\0";
//     char f[40] = "SSDFDSF\0";
//     char g[40] = "\0";
//     int a;
//     int b;
//     int c;

//     a = 0;
//     b = 0;
//     c = 0;

//     a = ft_str_is_uppercase(e);
//     b = ft_str_is_uppercase(f);
//     c = ft_str_is_uppercase(g);

//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
// }

#include <stdio.h>
int ft_str_is_uppercase(char *str);
int main(void)
{
    char    str1[4] = "abc";
    char    str2[4] = "ABC";
    char    str3[4] = "123";
    char    str4[1];
    char    str5[4] = "aBa";
    str4[0] = '\0';
    printf("%d\n", ft_str_is_uppercase(str1));
    printf("%d\n", ft_str_is_uppercase(str2));
    printf("%d\n", ft_str_is_uppercase(str3));
    printf("%d\n", ft_str_is_uppercase(str4));
    printf("%d\n", ft_str_is_uppercase(str5));
    return (0);
}