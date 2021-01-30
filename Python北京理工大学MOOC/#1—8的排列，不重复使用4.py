#1_8排列组合，不重复4
def ZuHeTedex(li):
    reli = []
    for i in range(0, len(li)):
        if 0 == i:
            reli.append([i])
        else :
            addli = []
            addli.append([i])

            for li in reli:
                addli.append(li+[i])
                result += addli
        return reli
