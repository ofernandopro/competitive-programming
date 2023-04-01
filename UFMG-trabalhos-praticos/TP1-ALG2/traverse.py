def traverse() # travers the triangulated polygons list for 
            # assigning 3-colors
    last_poly = len(polygons) - 1 # find last polygon on list
    lb.Items.Add("[p" + last_poly + "] Last Polygon: \t" + 
        polygons[last_poly][0] + polygons[last_poly][1] + 
        polygons[last_poly][2]) # debug message

    # directly assign last polygons vertex's colors
    vertex_colors[get_index(polygons[last_poly][0])] = vertex_color.Red
    vertex_colors[get_index(polygons[last_poly][1])] = vertex_color.Blue
    vertex_colors[get_index(polygons[last_poly][2])] = vertex_color.Green

    colorize(0) # start deep-first 3-color algorithm
