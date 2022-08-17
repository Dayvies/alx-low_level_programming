#!/usr/bin/python3

"""
Calculates perimeter of island
"""


def island_perimeter(grid):
    """Calculates Perimeter of island marked by 1s"""
    if isinstance(grid, list) and isinstance(grid[0], list):
        pass
    else:
        return
    sum = 0

    for j in range(len(grid)):
        for i in range(len(grid[j])):
            y = len(grid) - 1
            z = len(grid[j]) - 1
            x = grid[j][i]
            if x == 1:
                if (j-1) < 0 or grid[j-1][i] == 0:
                    sum += 1
                if (i-1) < 0 or grid[j][i-1] == 0:
                    sum += 1
                if (i+1) > z or grid[j][i+1] == 0:
                    sum += 1
                if (j+1) > y or grid[j+1][i] == 0:
                    sum += 1

    return(sum)
