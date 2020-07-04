#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of the island described in grid
    """
    if type(grid) is list:
        perimeter = 0
        for row in range(len(grid)):
            for col in range(len(grid[row])):
                if grid[row][col] == 1:
                    rig = grid[row][col + 1] if col + 1 < len(grid[row]) else 0
                    lef = grid[row][col - 1] if col - 1 >= 0 else 0
                    up = grid[row - 1][col] if row - 1 >= 0 else 0
                    down = grid[row + 1][col] if row + \
                        1 < len(grid[row]) else 0
                    perimeter += 4 * grid[row][col] - (rig + lef + up + down)
        return perimeter
