/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:00:03 by dcaetano          #+#    #+#             */
/*   Updated: 2024/11/12 10:05:35 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_HPP
#define TOOL_HPP

class Tool
{
public:
	Tool(void);
	Tool(const Tool &);
	Tool &operator=(const Tool &);
	virtual ~Tool();
	virtual void use(void) = 0;
	unsigned int getNumberOfUses(void) const;

protected:
	unsigned int _numberOfUses;
};

#endif // !TOOL_HPP
