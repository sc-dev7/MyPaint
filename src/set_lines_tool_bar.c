/*
** EPITECH PROJECT, 2022
** set_lines_tool_bar.c
** File description:
** set_lines_tool_bar.c
*/

#include "../include/my.h"

void set_lines_tool_bar(glo g)
{
    sfVertex l1[] = {
        { 479, 20, sRGB(100, 100, 100) }, { 479, 220, sRGB(100, 100, 100) },
        { 480, 20, sRGB(100, 100, 100) }, { 480, 220, sRGB(100, 100, 100) },
        { 481, 20, sRGB(100, 100, 100) }, { 481, 220, sRGB(100, 100, 100) }
    };
    sfVertex l2[] = {
        { 1119, 20, sRGB(100, 100, 100) }, { 1119, 220, sRGB(100, 100, 100) },
        { 1120, 20, sRGB(100, 100, 100) }, { 1120, 220, sRGB(100, 100, 100) },
        { 1121, 20, sRGB(100, 100, 100) }, { 1121, 220, sRGB(100, 100, 100) }
    };
    sfVertex l3[] = {
        { 1639, 20, sRGB(100, 100, 100) }, { 1639, 220, sRGB(100, 100, 100) },
        { 1640, 20, sRGB(100, 100, 100) }, { 1640, 220, sRGB(100, 100, 100) },
        { 1641, 20, sRGB(100, 100, 100) }, { 1641, 220, sRGB(100, 100, 100) }
    };
    set_lines_tool_bar2(g, l1, l2, l3);
}

void set_lines_tool_bar2(glo g, sfVertex *l1, sfVertex *l2, sfVertex *l3)
{
    sfVAa(g.w.ltb, l1[0]); sfVAa(g.w.ltb, l1[1]);
    sfVAa(g.w.ltb, l1[2]); sfVAa(g.w.ltb, l1[3]);
    sfVAa(g.w.ltb, l1[4]); sfVAa(g.w.ltb, l1[5]);
    sfVAa(g.w.ltb, l2[0]); sfVAa(g.w.ltb, l2[1]);
    sfVAa(g.w.ltb, l2[2]); sfVAa(g.w.ltb, l2[3]);
    sfVAa(g.w.ltb, l2[4]); sfVAa(g.w.ltb, l2[5]);
    sfVAa(g.w.ltb, l3[0]); sfVAa(g.w.ltb, l3[1]);
    sfVAa(g.w.ltb, l3[2]); sfVAa(g.w.ltb, l3[3]);
    sfVAa(g.w.ltb, l3[4]); sfVAa(g.w.ltb, l3[5]);
    sfVertexArray_setPrimitiveType(g.w.ltb, sfLines);
}
