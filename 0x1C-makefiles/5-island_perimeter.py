#!/usr/bin/python3
"""that returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """grid is a list of list of integers:

    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height dont exceed 100

    Returns: perimeter
"""
    perimeter = 0
    length = len(grid)
    width = len(grid[0])
    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                if i != 0 and grid[i - 1][j] == 0:
                    perimeter += 1
                elif i == 0:
                    perimeter += 1
                if i != length - 1 and grid[i + 1][j] == 0:
                    perimeter += 1
                elif i == length - 1:
                    perimeter += 1
                if j != 0 and grid[i][j - 1] == 0:
                    perimeter += 1
                elif j == 0:
                    perimeter += 1
                if j != width -1 and grid[i][j + 1] == 0:
                    perimeter += 1
                elif j == width - 1:
                    perimeter += 1
    return perimeter