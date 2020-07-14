def symmetric_pairs(d):
    for key in d:
        val = d[key]

        if d[val] == key:
            return(val,key)
    return -1,-1


if __name__ == "__main__":

    n=int(input("Enter the number of elements: \n"))
    d = dict(input().split() for _ in range(n))

    result=symmetric_pairs(d)
    print(result)
