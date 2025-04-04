def is_perfect_cube():
    num = 27
    cube_root = round(abs(num) ** (1/3))
    return cube_root ** 3 == abs(num)