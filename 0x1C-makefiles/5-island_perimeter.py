#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of the island described in grid
    """
    perimeter = 0
    if type(grid) is list:
        for r in range(len(grid)):
            for c in range(len(grid[r])):
                if grid[r][c] == 1:
                    rig = grid[r][c + 1] if c + 1 < len(grid[r]) else 0
                    lef = grid[r][c - 1] if c - 1 >= 0 else 0
                    up = grid[r - 1][c] if r - 1 >= 0 else 0
                    down = grid[r + 1][c] if r + 1 < len(grid) else 0
                    perimeter += 4 * grid[r][c] - (rig + lef + up + down)
    return perimeter
