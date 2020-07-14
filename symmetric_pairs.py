'''
Given a list of Number pairs ,if pair(i,j) exist and a pair (j,i) also exist ,return the pair

TEST CASE 
Input:
{ {1,3}, {2,6}, {3,5}, {3,1}, {7,4}, {8,7} }

Output:
  {3,1}
'''  
  





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
