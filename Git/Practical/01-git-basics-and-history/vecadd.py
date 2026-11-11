"""Calculate the dot product of two vectors."""

vector_a = [1, 2, 3]
vector_b = [4, 5, 6]

if len(vector_a) != len(vector_b):
    raise ValueError("Vectors must have the same length")

dot_product = sum(a * b for a, b in zip(vector_a, vector_b))
print("Dot product:", dot_product)
