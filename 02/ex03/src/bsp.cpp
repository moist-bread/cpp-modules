/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:14:04 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/04 17:30:39 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

static Fixed triangle_area(Point const v1, Point const v2, Point const v3);

/// @param a, b, c the vertices of the triangle
/// @param point the point to check
/// @return true if the point is inside of the triangle, false otherwise.
bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed area_total = triangle_area(a, b, c);
	if (area_total == 0)
		return (false);
	
	Fixed area_pab = triangle_area(point, a, b);
	if (area_pab == 0)
		return (false);
	Fixed area_pbc = triangle_area(point, b, c);
	if (area_pbc == 0)
		return (false);
	Fixed area_pac = triangle_area(point, a, c);
	if (area_pac == 0)
		return (false);
	
	return (area_total == area_pab + area_pbc + area_pac);
}

static Fixed triangle_area(Point const v1, Point const v2, Point const v3)
{
	Fixed area;
	
	// doing the formula for the area of a triangle
	// but using the Fixed class operators
	// | ( Ax( By − Cy ) + Bx( Cy − Ay ) + Cx( Ay − By ) ) / 2 |
	area = ((v1.getXFixed() * v2.getYFixed()) - (v1.getXFixed() * v3.getYFixed()) + \
			(v2.getXFixed() * v3.getYFixed()) - (v2.getXFixed() * v1.getYFixed()) + \
			(v3.getXFixed() * v1.getYFixed()) - (v3.getXFixed() * v2.getYFixed())) / 2;
	
	return (area.abs());	
}
