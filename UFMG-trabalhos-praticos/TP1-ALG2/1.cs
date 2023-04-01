public void traverse() {

    int last_poly = polygons.Length - 1; // find last polygon on list

    // directly assign last polygons vertex's colors
    vertex_colors[get_index(polygons[last_poly][0])] = vertex_color.Red;
    vertex_colors[get_index(polygons[last_poly][1])] = vertex_color.Blue;
    vertex_colors[get_index(polygons[last_poly][2])] = vertex_color.Green;

    colorize(0); // start deep-first 3-color algorithm
}  