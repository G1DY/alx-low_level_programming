#!/usr/bin/python3
"""defines a function that returns the perimeter of 
   the island described in grid
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    The grid represents water by 0 and land by 1

    Args:
        grid: a list of list of integers representing an island
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2

