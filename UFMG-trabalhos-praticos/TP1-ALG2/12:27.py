def triangulate():
        poly = points2
        finished = False # A triangulação foi terminada?

        if (len(poly) == 3): # Se há somente 3 pontos, não precisa rodar o algoritmo
            finished = True
            
        while (finished == False):  # Loop enquanto a triangulação não terminou ainda
            i = 0
            not_found = True # Encontramos uma orelha? Não ainda
            while (not_found & (i < len(poly)) # Enquanto não encontramos uma orelha e não processamos todos os vértices ainda
                #p = poly[i] # Pegue o ponto atual
                if is_ear(poly[i]): # Checa se podemos pegar uma orelha daquele vértice
                    not_found = False # Encontramos uma
                else:
                    i = i + 1 # Continue a procurar