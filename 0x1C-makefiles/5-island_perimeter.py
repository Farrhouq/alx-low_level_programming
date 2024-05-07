#!/usr/bin/python3
"""This module contains the island_perimeter function"""


def island_perimeter(grid):
    """ that returns the perimeter of the island described in grid"""
    total_perimeter = 0
    old_land_indices = []
    for row in grid:
        row_perimeter = 0
        new_land_indices = []
        for cell in range(len(row)):
            if row[cell]:
                new_land_indices.append(cell)

        stre = 1
        for i in range(len(row)):
            if i in new_land_indices:
                if i+1 in new_land_indices:
                    stre += 1
                    continue
                else:
                    row_perimeter += stre*2 + 2 if stre else 0
                    stre = 1

        joining_points = [j for j in range(
            len(row)) if j in new_land_indices and j in old_land_indices]
        row_perimeter -= 2*len(joining_points)

        total_perimeter += row_perimeter
        old_land_indices = new_land_indices

    return total_perimeter
