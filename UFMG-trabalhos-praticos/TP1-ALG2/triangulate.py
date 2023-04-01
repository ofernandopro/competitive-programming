def triangulate(points):

    poly = points # create a polygon from the current vertices
    finished = False # triangulation finished ?
    ears = []

    if (len(poly) == 3): # if there's only 3 points, no need to run algorithm
        finished = True

    while (finished == False): # loop while triangulation not finished yet
    
      i = 0
      not_found = True # did we found an ear? no, not yet
      while (not_found & (i < len(poly))): # while we did not found any ear and # not yet processed all vertices     
        
        p = poly[i]  # get current point
        if (is_ear(p)): # check if we can get an ear from that vertice
          not_found = False # good we found one
        else:
          i = i + 1 # continue to search
            
        poly.remove(p) # remove the vertice we found the ear from the updated_vertices list
        ears.append(p)
                
        if (len(poly) == 3): # if there's only 3 vertice left
          finished = True # this means we finished the triangulation


    #polygons = [len(ears) + 1][] 
                    # init polygons structure to ears.count + 1 (for last 3 points left)
    i = 0
    for i in range(len(ears)):
        Point[] points = (Point[])ears[i] # move ears to final triangulated polygons list
        polygons[i] = new Point[3]
        polygons[i][0] = points[0]
        polygons[i][1] = points[1]
        polygons[i][2] = points[2]
            

                # we have 3 left vertices on updated_vertices list, 
                #    - the last triangulated polygon -
            polygons[ears.Count] = new Point[updated_vertices.Length] 
                # add it to triangulated polygons list also
            for (int i = 0 i < updated_vertices.Length i++):
            
                polygons[ears.Count][i] = updated_vertices[i]
            

