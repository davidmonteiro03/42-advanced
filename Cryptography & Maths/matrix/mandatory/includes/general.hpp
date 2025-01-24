/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcaetano <dcaetano@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 19:42:14 by dcaetano          #+#    #+#             */
/*   Updated: 2025/01/24 23:00:24 by dcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename K>
Vector<K> operator*(const K &, const Vector<K> &);

template <typename K>
Matrix<K> operator*(const K &, const Matrix<K> &);

template <typename K>
K ft_abs(const K &);

template<typename V, typename K>
V lerp(const V &, const V &, const K &);
