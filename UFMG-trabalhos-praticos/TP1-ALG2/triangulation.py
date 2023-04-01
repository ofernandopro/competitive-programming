
def triangulate():
    poly = points2
    finished = False

    if (len(poly) == 3):
        finished = True

    while (finished == False):
        i = 0
        not_found = True
        while (not_found & (i < len(poly))):
            p = poly[i]
            if is_ear(p):
                not_found = False
            else:
                i = i + 1
                
        #update_vertices(p) # remove the vertice we found the ear from the updated_vertices list
        poly.remove(p)
        ears.append(p)
        if (len(poly) == 3) # if there's only 3 vertice left
            finished = True # this means we finished the triangulation    
    
    for i = 0 in range(len(ears) + 1):
        points = ears[i] # move ears to final triangulated polygons list
        polygons[i][0] = points[0]
        polygons[i][1] = points[1]
        polygons[i][2] = points[2]

        for i = 0 in range(len(poly) + 1):
            polygons[len(ears)][i] = poly[i]
            i = i+1



'''

def triangulate():   # triangulate the bigger polygon-shape
    #mPolygon poly = new mPolygon(updated_vertices) # create a polygon from the current vertices
        poly = points2
        finished = False # triangulation was finished ?

        if (len(points2) == 3): # if there's only 3 points, no need to run algorithm
            finished = True

        Point p = new Point()

        while (finished == False):  # loop while triangulation not finished yet
        
        i = 0
                not_found = True # did we found an ear? no, not yet
                while (not_found & (i < updated_vertices.Length)) # while we did not found any ear and 
                { # not yet processed all vertices
                    p = points2[i] # get current point
                    if (is_ear(p)) # check if we can get an ear from that vertice
                        not_found = False # good we found one
                    else
                        i = i + 1 # continue to search
                }

                update_vertices(p) # remove the vertice we found the ear from the updated_vertices list
                poly = new mPolygon(updated_vertices) # reupdate the polygon from the rest of vertices
                if (len(updated_vertices) == 3) # if there's only 3 vertice left
                    finished = True # this means we finished the triangulation
    

    # when the CS:IP reaches here, this means triangulation finished
    polygons = new Point[ears.Count + 1][] 
                    # init polygons structure to ears.count + 
                    # 1(for last 3 points left)

    for i = 0 in range(len(ears) + 1):
        Point[] points = (Point[])ears[i]  
                    # move ears to final triangulated polygons list
                polygons[i] = new Point[3]
                polygons[i][0] = points[0]
                polygons[i][1] = points[1]
                polygons[i][2] = points[2]

                # we have 3 left vertices on updated_vertices list, 
                #    - the last triangulated polygon -
            polygons[len(ears)] = new Point[updated_vertices.Length] 
                # add it to triangulated polygons list also
            for i = 0 in range(len(updated_vertices) + 1):
                polygons[ears.Count][i] = updated_vertices[i]
                i = i+1


'''