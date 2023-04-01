def getTriangles(points2,i,j):
    ee = []
    if j-i<2:
        return []
    if j-i==2:
        return [[[i,i+1,j]]]
    for k in range(i+1,j): # k is the vertex such that the triangle ikj split the polygon 1j in 2 subspace plus the triangle ikj
        e1= getTriangles(points2,i,k)
        e2 = getTriangles(points2,k,j)
        if k==i+1:
            for y in e2:
                e = [[i,k,j]]
                e.extend(y)
                ee.append(e)
        elif k==j-+1:
            for x in e1:
                e = [[i,k,j]]
                e.extend(x)
                ee.append(e)
        else:
            for x in e1:
                for y in e2:
                    e = [[i,k,j]]
                    e.extend(x)
                    e.extend(y)
                    ee.append(e)
    return ee

n=5
tr = getTriangles(points2,0,n-1)
print(tr)
print(len(tr))