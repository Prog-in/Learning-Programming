Matrix = type['Matrix']

class MatrixError(Exception):
    """Basic exception for errors raised by matrix creations, transformations or operations"""
    def __init__(self, matrix, msg: str = None):
        if msg is None:
            msg = 'Ocurried a error with the matrix'
            super().__init__(msg) # message to Exception
        self.matrix: Matrix = matrix


class MatrixCreationError(MatrixError):
    """Exception for errors raised in matrix creation"""
    def __init__(self, matrix, msg: str = None):
        if msg is None:
            msg = 'Ocurried a error with the matrix creation'
        super().__init__(matrix, msg)
    

class MatrixWrongDimensionError(MatrixCreationError):
    """Exception for errors raised by wrong matrix dimension"""


class MatrixInvertError(MatrixError):
    """Exception for errors raised in matrix inversion"""


class MatrixMathError(MatrixError):
    """Exception for errors raised in matrix math operations"""


class MatrixAddError(MatrixMathError):
    """Exception for errors raised in matrix addition"""


class MatrixMultiplyError(MatrixMathError):
    """Exception for errors raised in matrix multiplication"""
