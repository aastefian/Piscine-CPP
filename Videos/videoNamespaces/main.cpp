/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svilau <svilau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 11:13:38 by svilau            #+#    #+#             */
/*   Updated: 2018/10/01 11:25:47 by svilau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;
int	f( void ) { return 2; }

namespace	Foo {
	int	gl_var = 3;
	int	f( void ) { return 4; }
}

namespace	Bar {
	int	gl_var = 5;
	int	f( void ) { return 6; }
}

namespace Muf = Bar;

int main( void ) {
	printf( "gl_var:  [%d]\n", ::gl_var );
	printf( "f():  [%d]\n\n", f() );

	printf( "gl_var:  [%d]\n", Foo::gl_var );
	printf( "f():  [%d]\n\n", Foo::f() );

	printf( "gl_var:  [%d]\n", Bar::gl_var );
	printf( "f():  [%d]\n\n", Bar::f() );

	printf( "gl_var:  [%d]\n", Muf::gl_var );
	printf( "f():  [%d]\n\n", Muf::f() );

	return 0;
}
