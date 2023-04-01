def find_polygons(Point p) # find given points related polygons

int v0_index, v1_index, v2_index;

    for (int i = polygons.Length - 1; i > -1; i--) 
                    # loop through all polygons
    
        if ((p == polygons[i][0]) | (p == polygons[i][1]) | 
                 (p == polygons[i][2])) 
                # if given point is one of the vertexes of current polygon
                
                    for (int j = 0; j < 3; j++) 
                        # check polygons all 3-vertexes colors
                               # vertexes are rounded and each one is 
                        # checked with two other
                        v0_index = get_index(polygons[i][j]);   # vertex1
                        v1_index = get_index(polygons[i][(j + 1) % 3]); 
                                                # vertex2
                        v2_index = get_index(polygons[i][(j + 2) % 3]); 
                                                # vertex3

                        if (vertex_colors[v0_index] == vertex_color.Empty) 
                            # if selected vertex's color is not set yet
                        
                            vertex_colors[v0_index] = 
                            find_color(vertex_colors[v1_index], 
                                vertex_colors[v2_index]); 
                                # try to set a color to it using 
                                # other two vertexes colors
                                lb.Items.Add("[s" + v0_index + "] 
                            Assigned color: \t" + str_color
                            (vertex_colors[v0_index]) + " " + 
                            str_color(vertex_colors[v1_index]) + 
                            " ," + str_color(vertex_colors[v2_index]) + 
                            "} " + polygons[i][j]); # debug message
                        
                    

                
    
