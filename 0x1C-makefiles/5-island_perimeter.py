#!/usr/bin/python3


def island_perimeter(grid):
    perimeter = 0
    for r in range(len(grid)):
        for c in range(len(grid[r])):
            if grid[r][c] == 1:
                sur = get_surround(r, c, grid)
                perimeter += sum([1 for w in sur if sur == 0])
    return perimeter


def get_surround(i, j, grid):
    return (grid[i][j + 1], grid[j][j - 1], grid[i - 1][j], grid[i + 1][j])


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
