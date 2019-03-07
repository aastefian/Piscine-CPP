/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample2.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 12:07:15 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 14:45:14 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE2_CLASS_H
# define SAMPLE2_CLASS_H

class Sample2 {

public:

	char	a1;
	int		a2;
	float	a3;

	Sample2( char p1, int p2, float p3 );
	~Sample2( void );

	void	bar( void );

};

#endif
