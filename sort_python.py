def SortNumArray(T):
    Length = len(T)
    T2 = [int()] * Length
    unfixed_size = Length
    
    _max = 0
    for i in range(Length):
        if(T[i] > _max):
            _max = T[i]      
            
    _min = _max
    index = 0
    for i in range(Length):
        for v in range(unfixed_size):
            if(T[v] <= _min):
                _min = T1[v]
                indice = v
        if(unfixed_size > 0):
            T2[i] = _min
            _min = _max
            T1.pop(indice)
        unfixed_size -= 1
        
    return T2
