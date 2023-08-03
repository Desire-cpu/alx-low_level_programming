#!/usr/bin/python3
"""
    This is the island_perimeter function.
"""


def neighbour(grid, y, x):
    """
        Finds the number of neighbours of a square.

        Args:
            grid (list): the matrix.
    """
    nob = 4

    if (y > 0) and grid[y - 1][x]:
        nob -= 1
    if (x > 0) and grid[y][x - 1]:
        nob -= 1
    if (y < len(grid) - 1) and grid[y + 1][x]:
        nob -= 1
    if (x < len(grid[0]) - 1) and grid[y][x + 1]:
        nob -= 1
    return nob


def island_perimeter(grid):
    """

        Args:
            grid (list): the matrix.
    """
    perimeter = 0
    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                perimeter += neighbour(grid, y, x)
    return perimeter
