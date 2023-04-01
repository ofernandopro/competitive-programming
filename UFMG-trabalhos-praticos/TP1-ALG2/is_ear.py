def is_ear(p): # checks if given vertice is in a ear

    mPolygon m = new mPolygon(updated_vertices) 
                    # init. a polygon from the current vertices

    if (m.is_vertex(p) == True): # if given point is a vertex
    
        if (m.vertex_type(p) == VertexType.ConvexPoint):
                    # and it's a convex point
                
                    Point curr_point = p
                    Point prev_point = m.get_prev_point(p) 
                    # find previous adjacent point
                    Point next_point = m.get_next_point(p) 
                    # find next adjacent point

                    for (int i = updated_vertices.GetLowerBound(0) 
                    i < updated_vertices.GetUpperBound(0) i++):
                            # loop through all other vertices
                    
                        Point pt = updated_vertices[i]
                        if (!(is_points_equal(pt, curr_point) | 
                          is_points_equal(pt, prev_point) | 
                          is_points_equal(pt, next_point)))
                               # if pt is not equal to checked vertice or 
                            # its's next and prev adjacent vertices
                            if (is_point_in_triangle(new Point[] 
                         prev_point, curr_point, next_point }, pt)) 
                            # check pt lies in triangle
                                return False   
                            # if another vertice lies in this 
                            # triangle, then this is not an ear
                        
                    
                
                else         # concave
                    return False 
                            # we cannot make ears from concave points

                return True    # if CS:IP reaches here, this means 
                            # vertice passed the test and is an ear
    
    return False             # if the given vertex is not an vertex, 
                            # it's not related to an ear also!
