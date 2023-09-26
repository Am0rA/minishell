/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   executable.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: itopchu <itopchu@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/08/11 17:29:43 by itopchu       #+#    #+#                 */
/*   Updated: 2023/08/11 17:29:43 by itopchu       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTABLE_H
# define EXECUTABLE_H

# include "minishell.h"

// ╔════════════════════════════════════════════════════════════════════════╗
// ║					.c files in executor/executable folder				║
// ╚════════════════════════════════════════════════════════════════════════╝
// ╭────────────────────────────────────╮
// │            executable.c            │
// ╰────────────────────────────────────╯
/*if not built in this function is given*/
int		execute_exe(t_com *com);
#endif