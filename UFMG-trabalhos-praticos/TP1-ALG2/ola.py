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










def is_ear(p): # Checa se um dado vértice está em uma orelha

    m = poly 

    if (m.is_vertex(p) == True):
    
        if (m.vertex_type(p) == VertexType.ConvexPoint):
                
                    curr_point = p
                    prev_point = m.get_prev_point(p) 
                    # find previous adjacent point
                    next_point = m.get_next_point(p) 
                    # find next adjacent point

                    for i = poly.GetLowerBound(0) in range(poly.GetUpperBound(0)):
                    
                        pt = poly[i]
                        if (!(is_points_equal(pt, curr_point) | is_points_equal(pt, prev_point) | is_points_equal(pt, next_point)))

                            if (is_point_in_triangle(new Point[] prev_point, curr_point, next_point, pt)):
                                return False
        else
            return False 

        return True
    
    return False 
