/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample1.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 14:45:22 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_H
# define SAMPLE1_CLASS_H

class Sample1 {

public:

	char	a1;
	int		a2;
	float	a3;

	Sample1( char p1, int p2, float p3 );
	~Sample1( void );

	void	bar( void );

};

#endif
