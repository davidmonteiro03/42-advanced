/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:22:29 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:36:53 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <vector>
#include "Worker.hpp"

class Workshop
{
private:
	std::vector<Worker *> _workers;
};

#endif // !WORKSHOP_HPP
