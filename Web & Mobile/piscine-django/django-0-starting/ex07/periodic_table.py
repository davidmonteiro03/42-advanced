import sys


def my_periodic_table():
    ft_output = ""
    with open("periodic_table.txt", "r") as filein:
        lines = [_.strip() for _ in filein.readlines()]
        filein.close()
    with open("periodic_table.html", "w") as fileout:
        for l in lines:
            ft_element = [_.strip() for _ in l.split('=')]
            ft_elem_tmp_data = [_.strip() for _ in ft_element[1].split(',')]
            ft_elem_tmp_data = [_.split(':') for _ in ft_elem_tmp_data]
            ft_elem_tmp_data = [[__.strip() for __ in _] for _ in ft_elem_tmp_data]
            ft_elem_data = {}
            ft_elem_data['name'] = ft_element[0]
            for e in ft_elem_tmp_data:
                ft_elem_data[e[0]] = e[1]
            print(ft_elem_data, file=fileout)
        fileout.close()


if __name__ == '__main__':
    my_periodic_table()
