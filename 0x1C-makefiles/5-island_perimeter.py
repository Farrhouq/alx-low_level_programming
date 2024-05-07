#!/usr/bin/python3
"""This module contains the island_perimeter function"""


def island_perimeter(grid):
    """ that returns the perimeter of the island described in grid"""
    total_perimeter = 0
    old_land_indices = []
    for row in grid:
        land_count = 0
        new_land_indices = []
        for cell in range(len(row)):
            if row[cell]:
                land_count += 1
                new_land_indices.append(cell)

        row_perimeter = land_count*2 + 2 if land_count else 0
        joining_points = [j for j in range(
            len(row)) if j in new_land_indices and j in old_land_indices]
        row_perimeter -= 2*len(joining_points)

        total_perimeter += row_perimeter
        old_land_indices = new_land_indices

    return total_perimeter
