ls=["F","f"]
def func(a):
    global ls
    print(ls)
    ls = ["a","b"]
    print(ls)
    ls.append(a)
    print(ls)
    return
func("C")
print(ls)
