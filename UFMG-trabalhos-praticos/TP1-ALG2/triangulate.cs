public void triangulate()   // triangulate the bigger polygon-shape
{
    mPolygon poly = new mPolygon(updated_vertices); 
                    // create a polygon from the current vertices
        Boolean finished = false; // triangulation-finished?

        if (updated_vertices.Length == 3) 
                    // if there's only 3 points, no need to run algorithm
            finished = true;

        Point p = new Point();

        while (finished == false)   
                    // loop while triangulation not finished yet
        {
        int i = 0;
                Boolean not_found = true;   
                        // did we found an ear? no, not yet
                while (not_found && (i < updated_vertices.Length)) 
                        // while we did not found any ear and 
                        // not yet processed all vertices
                {
                    p = updated_vertices[i];    // get current point
                    if (is_ear(p))              
                        // check if we can get an ear from that vertice
                        not_found = false;      // good we found one
                    else
                        i++;                    // continue to search
                }

                update_vertices(p);             
                    // remove the vertice we found the ear 
                    // from the updated_vertices list
                poly = new mPolygon(updated_vertices);  
                    // reupdate the polygon from the rest of vertices
                if (updated_vertices.Length == 3)   
                    // if there's only 3 vertice left
                    finished = true;                
                    // this means we finished the triangulation
    }

    // when the CS:IP reaches here, this means triangulation finished
    polygons = new Point[ears.Count + 1][]; 
                    // init polygons structure to ears.count + 
                    // 1(for last 3 points left)
    for (int i = 0; i < ears.Count; i++)
    {
        Point[] points = (Point[])ears[i];  
                    // move ears to final triangulated polygons list
                polygons[i] = new Point[3];
                polygons[i][0] = points[0];
                polygons[i][1] = points[1];
                polygons[i][2] = points[2];
            }

                // we have 3 left vertices on updated_vertices list, 
                //    - the last triangulated polygon -
            polygons[ears.Count] = new Point[updated_vertices.Length]; 
                // add it to triangulated polygons list also
            for (int i = 0; i < updated_vertices.Length; i++)
            {
                polygons[ears.Count][i] = updated_vertices[i];
            }
}
