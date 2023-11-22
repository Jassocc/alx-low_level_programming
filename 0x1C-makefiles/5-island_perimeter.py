#!/usr/bin/python3
"""
returns perimeter of the island grid
"""


def island_perimeter(grid):
    """
    returns perimeter grid
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                """if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    perimeter -= 2"""
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
                """if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    perimeter -= 2"""
    return perimeter
