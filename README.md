# What is a Matrix?

This introduces the matrix - the rectangular array at the heart of matrix algebra. Matrix algebra is used quite a bit in advanced statistics, largely because it provides two benefits.

- Compact notation for describing sets of data and sets of equations.
- Efficient methods for manipulating sets of data and solving sets of equations.

## Matrix Definition

A **matrix** is a rectangular array of numbers arranged in rows and columns. The array of numbers below is an example of a matrix.

​															<img src="images\Image1.PNG" style="zoom:80%;" />

The number of rows and columns that a matrix has is called its **dimension** or its **order**. By convention, rows are listed first; and columns, second. Thus, we would say that the dimension (or order) of the above matrix is 3 x 4, meaning that it has 3 rows and 4 columns.

Numbers that appear in the rows and columns of a matrix are called **elements** of the matrix. In the above matrix, the element in the first column of the first row is 21; the element in the second column of the first row is 62; and so on.

## Matrix Notation

Statisticians use symbols to identify matrix elements and matrices.

- **Matrix elements.** Consider the matrix below, in which matrix elements are represented entirely by symbols.

  <img src="images\Image2.PNG" style="zoom:80%;" />

  By convention, first subscript refers to the row number; and the second subscript, to the column number. Thus, the first element in the first row is represented by A<sub>11</sub>. The second element in the first row is represented by A<sub>12</sub>. And so on, until we reach the fourth element in the second row, which is represented by A<sub>24</sub>.

- **Matrices.** There are several ways to represent a matrix symbolically. The simplest is to use a boldface letter, such as **A**, **B**, or **C**. Thus, **A** might represent a 2 x 4 matrix, as illustrated below.

  <img src="images\Image3.PNG" style="zoom:80%;" />

  Another approach for representing matrix **A** is:

  ​								**A** = [ *A*ij ] where i = 1, 2 and j = 1, 2, 3, 4

  This notation indicates that **A** is a matrix with 2 rows and 4 columns. The actual elements of the array are not displayed; they are represented by the symbol A<sub>ij</sub>.