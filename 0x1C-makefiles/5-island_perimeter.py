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
    for j in range(1, len(grid)-1):
        for i in range(1, len(grid[j])-1):
            x = grid[j][i]
            if grid[j-1][i] == 0 and x == 1:
                sum += 1
            if grid[j][i-1] == 0 and x == 1:
                sum += 1
            if grid[j][i+1] == 0 and x == 1:
                sum += 1
            if grid[j+1][i] == 0 and x == 1:
                sum += 1
    return(sum)
