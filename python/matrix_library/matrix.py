from matrix_exceptions import *
from copy import deepcopy


class Matrix:
    """
    Class of mathematical matrices. 
    """

    def __init__(self, rows: int, columns: int, elements: list[int | float], autofill: bool = False):
        """
        Initialize a matrix from the given parameters.

        Parameters:
        - rows: number of rows in matrix
        - columns: number of columns in matrix
        - elements: list of matrix elements (will be arranged in rows and columns automatically)
        - autocomplete: if True, ignores the elements argument and creates a null matrix. If False, it will not change - anything
        """

        # Checking parameters and raising errors
        if not isinstance(rows, int) or not isinstance(columns, int):
            raise MatrixCreationError("Rows and columns must be integers")
        if rows <= 0 or columns <= 0:
            raise MatrixCreationError("Rows and columns must be greater than 0")
        if not isinstance(autofill, bool):
            raise MatrixCreationError("Autofill must be a boolean")
        if not isinstance(elements, list):
            raise MatrixCreationError("Elements must be a list")
        if not all(isinstance(x, int | float) for x in elements): # Accepts only int and float
            raise MatrixCreationError("Elements must be integers or floats")
        if not autofill and len(elements) != rows * columns:
            raise MatrixCreationError("Elements must be equal to rows * columns")
        

        dimension = rows * columns
        self.elements: list = elements.copy()

        if autofill is True:
            self.elements = [0] * dimension

        elif len(self.elements) != rows * columns:
            raise MatrixCreationError()

        if not all(isinstance(x, int | float) for x in self.elements): # Accepts only int, str and float
            raise MatrixCreationError()

        self.rows: int = rows
        self.columns: int = columns
        self.autofill: bool = autofill
        self.dimension: int = dimension
        self.matrix: list[list] = []

        for i in range(self.rows):
            self.matrix.append(self.elements[i*self.columns:(i+1)*self.columns])


    def __eq__(self, other: type['Matrix']) -> bool:
        """
        Returns True if, and only if the given matrix have equal number of rows and columns and same elements on the same positions. Else, returns False
        """
        if not isinstance(other, Matrix) or other.rows != self.rows or other.columns != self.columns:
            return False
        
        for row in range(self.rows):
            for i in range(self.columns):
                self_column = self.matrix[row][i]
                other_column = other.matrix[row][i]
                if self_column != other_column:
                    return False
        return True


    def __getitem__(self, index) -> list:
        """
        Returns the row, a list, at the index specified.
        """
        return self.matrix[index]


    def __neg__(self) -> type['Matrix']:
        """
        Returns a new matrix multiplied by -1.
        """
        return self * -1


    def __str__(self) -> str:
        """
        Returns the string representation of the matrix.
        """
        msg = ''
        for row in range(self.rows):
            if row < self.rows - 1:
                msg += f'{self.matrix[row]}\n'
            else:
                msg += f'{self.matrix[row]}'
        return msg


    def __repr__(self) -> str:
        """
        Returns the detailed string representation of the matrix.
        """
        return f'Matrix({self.rows}, {self.columns}, {self.elements}, {self.autofill})'


    def __add__(self, other: type['Matrix']) -> type['Matrix']:
        """
        Matrix-additions the matrices.
        """
        # No need __radd__, only addition between matrices will call __add__
        if self.rows != other.rows or self.columns != other.columns:
            raise MatrixWrongDimensionError()
        else:
            new_matrix = Matrix(self.rows, self.columns, [], True)
            for row in range(self.rows):
                for column in range(self.columns):
                    new_matrix[row][column] = self.matrix[row][column] + other.matrix[row][column]
        return new_matrix


    def __sub__(self, other: type['Matrix']) -> type['Matrix']:
        """
        Matrix-subtracts the matrices.
        """
        return self + (-other)


    def __mul__(self, other: int) -> type['Matrix']:
        """
        Scalar multiply the given matrix by the given number on the right side of the matrix.
        """
        new_matrix = self.copy()
        print('entrou')
        if isinstance(other, int):
            for i in range(self.rows):
                for j in range(self.columns):
                    new_matrix[i][j] *= other
                #new_matrix[i] = [new_matrix[i][j] * other for j in range(self.columns)]
            return new_matrix
        
        elif isinstance(other, Matrix):
            raise MatrixMultiplyError(self, "Use the @ operator to multiply matrices!") # * for numbers, @ for matrices
        
        else:
            raise MatrixMultiplyError(self, "Can't multiply matrix by any type besides int and Matrix!")

    
    def __rmul__(self, other: int) -> type['Matrix']:
        """
        Scalar multiply the given matrix by the given number on the left side of the matrix.
        """
        # output not expected: other*self*other, self*other*other
        return self * other


    def __matmul__(self, other: type['Matrix']) -> type['Matrix']:
        """
        Matrix-multiply the given matrices. Operator: @
        """
        raise NotImplementedError("@ Operator not yet implemented")


    def determinant(self) -> int: # Only NxN matrix have determinants
        """
        Returns the determinant of the given matrix.
        """
        # Will implement general in the future
        sum = sub = 0 
        # Sarrus
        if self.rows == 3 and self.columns == 3: 
            for column in range(self.columns):
                tmp_sum = tmp_sub = 1
                # sum
                for row in range(self.rows):
                    fcolumn = (row + column) % self.columns
                    tmp_sum *= self.matrix[row][fcolumn]
                sum += tmp_sum
                # sub
                for row in range(self.rows-1, -1, -1):
                    fcolumn = (-row + column) % self.columns
                    tmp_sub *= self.matrix[row][fcolumn]
                sub += tmp_sub
            
            determinant = sum - sub
            return determinant


    def copy(self) -> type['Matrix']:
        """
        Returns a deep copy of the matrix.
        """
        tmp = deepcopy(self.elements)
        return Matrix(self.rows, self.columns, tmp)

       
if __name__ == '__main__': # Some tests that only check for errors
    e1 = [1, 2, 3, 4, 5, 6, 7, 8, 8]
    e2 = [3, 2, 3, 4, 1, 2, 7, 2, 9]
    e3 = [1, 8, 3, 4]
    e4 = [1, 2, 3, 4, 5, 8]

    a = Matrix(3, 3, e1)
    b = Matrix(3, 3, e2)
    
    print('a: ')
    print(a)
    print('b: ')
    print(b)

    print('\na*2*2:')
    print(a*2*2)
    assert a + b
    assert a - b
    assert a != b
    try:
        assert a * b  # if the error MatrixMultiplyError is raised, it's working
    except MatrixMultiplyError as er:
        print(er)
    assert a * 2
    assert 2 * a
    assert str(a)
    try:
        assert a @ b  # not yet implemented
    except NotImplementedError as er:
        print(er)
    assert a.determinant()
    assert a.copy() == a 
