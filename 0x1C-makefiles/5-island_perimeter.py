#!/usr/bin/python3
def island_perimeter(grid):
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
        joining_points = [j for j in range(len(row)) if j in new_land_indices and j in old_land_indices]
        row_perimeter -= 2*len(joining_points)

        total_perimeter += row_perimeter    
        old_land_indices = new_land_indices

    return total_perimeter


if __name__ == "__main__":
    grid = [
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 1, 0, 0]
    ]
    print(island_perimeter(grid))