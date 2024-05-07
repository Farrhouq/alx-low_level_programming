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


        # I have new land indices
        stre = 1
        # print(new_land_indices)
        for i in range(len(row)):
            if i in new_land_indices:
                # print("current i:", i)
                # stre = 1
                # print("current i", i)
                if i+1 in new_land_indices:
                    stre += 1
                    # print(i+1, "in, streak updated to", stre)
                    continue
                else:
                    # print(i+1, "not in, streak now", stre)
                    # print(stre, "is the streak breaking point because", i, '->', i+1, "not in", new_land_indices)
                    row_perimeter += stre*2 + 2 if stre else 0
                    # print("row perimeter is now", row_perimeter)
                    stre = 1
        
        # row_perimeter = land_count*2 + 2 if land_count else 0
        # we have to find another way to calculate the perimter for a row using the indices
        # print("row_perimeter", row_perimeter)
        joining_points = [j for j in range(
            len(row)) if j in new_land_indices and j in old_land_indices]
        row_perimeter -= 2*len(joining_points)
        # print(old_land_indices, new_land_indices, joining_points)

        total_perimeter += row_perimeter
        old_land_indices = new_land_indices

    return total_perimeter
