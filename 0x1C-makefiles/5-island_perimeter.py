#!/usr/bin/python3
"""
Calculate island perimeter
"""


def island_perimeter(grid):
    """Calcultae island perimeter"""
    max_row_width = max([sum(row) for row in grid])
    max_col_height = max([sum(col) for col in zip(*grid)])
    return (max_row_width + max_col_height) * 2
