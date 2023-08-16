"""
Implementation of some μ-recursive functions in Python.
"""

# Initial Functions
def S(a):
    """Successor function"""
    return a + 1

def Z(a):
    """Zero function"""
    return 0

def U(i, n, args):
    """Projection function"""
    i -= 1 # convert to 0-index
    return args[i]


# recursive primitives
def _sg(a):
    """Test-Zero function"""
    if a == 0:
        return 1
    else:
        func = _sg(a-1)
        return Z(U(1, 2, (a, func)))

def Sum(a, b):
    """Sum function"""
    if b == 0:
        return a
    else:
        func = Sum(a, b-1)
        return S(Sum(U(1, 3, (a, b-1, func)), U(2, 3, (a, b-1, func))))

def mult(a, b):
    """Multiplication function"""
    if b == 0:
        return 0
    else:
        func = mult(a, b-1)
        return Sum(U(1, 3, (a, b-1, func)), U(3, 3, (a, b-1, func)))

def pred(a):
    """Predecessor function"""
    if a == 0:
        return 0
    else:
        func = pred(a-1)
        return U(1, 2, (a - 1, func))

def subt(a, b):
    """Proper subtraction function"""
    if b == 0:
        return a
    else:
        func = subt(a, b-1)
        return pred(U(3, 3, (a, b-1, func)))

def equal(a, b):
    """Equality function"""
    if b == 0:
        return _sg(a)
    else:
        func = equal(a, b-1)
        return _sg(Sum(subt(U(1, 3, (a, b-1, func)), S(U(2, 3, (a, b-1, func)))), subt(S(U(2, 3, (a, b-1, func))), U(1, 3, (a, b-1, func)))))

def mod4(x):
    """Modulo 4 function"""
    if x == 0:
        return 0
    else:
        func = mod4(x-1)
        return mult(S(U(2, 2, (x-1, func))), _sg(equal(4, S(U(2, 2, (x-1, func))))))

# some tests
if __name__ == "__main__":
    assert _sg(0) == 1,      "tzer failed"
    assert _sg(1) == 0,      "tzer failed"
    assert S(3) == 4,        "suce failed"
    assert Sum(1, 2) == 3,   "Sum failed"
    assert mult(3, 2) == 6,  "mult failed"
    assert pred(3) == 2,     "pred failed"
    assert pred(0) == 0,     "pred failed"
    assert subt(5,2) == 3,   "subt failed"
    assert subt(2, 5) == 0,  "subt failed"
    assert equal(1,1) == 1,  "equal failed"
    assert equal(2, 1) == 0, "equal failed"
    assert mod4(5) == 1,     "mod4 failed"
    assert mod4(6) == 2,     "mod4 failed"
    assert mod4(6) == 2,     "mod4 failed"
    assert mod4(7) == 3,     "mod4 failed"
    assert mod4(8) == 0,     "mod4 failed"
    assert mod4(9) == 1,     "mod4 failed"
    assert mod4(0) == 0,     "mod4 failed"
    
    print("Passed in all tests!")
