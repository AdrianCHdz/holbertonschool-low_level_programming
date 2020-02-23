#!/usr/bin/python3
def island_perimeter(grid):
    """Documentation
    a = [y for x in grid for y in x]
    b = [sum([value for x, value in enumerate(y)]) for y in grid]
    """
    perimeter = []
    lands = [sum(x) * 2 + 2 if sum(x) != 0 else sum(x) for x in grid]
    """
    Conditioning environment to be surrounded by water
    if lands[0] != 0:
        lands = [0] + lands
    else:
        pass
    """

    for x, value in enumerate(lands):
        if lands[x-1] <= value:
            perimeter.append(value - max(lands[x - 1] - 2, 0))
        else:
            perimeter.append(value - max((value - 2, 0)))
    """
    lands2 = [value - (max(lands[x - 1] - 2, 0)) if
              lands[x - 1] <= value else
              value - max((value - 2, 0))
              for x, value in enumerate(lands)]
    """

    return sum(perimeter)
