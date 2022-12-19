# complexity-analysis-2602119096-regencode

Big-O-Notation

f(n) = O(g(n)) if there exists at least one pair of c and n0 
such that f(n) <= c*g(n) for all n >= n0

c is a constant

basically this says that g(n) will always be bigger than f(n)
g(n) is upper bound of f(n)

also since g(n) is the upper bound, the larger n value (such as O(n^2), O(n!)) can be said as the superset of smaller n values
i.e. we can say every algorithm is O(n!) as it is the upper bound (or slowest) functin

### Shortcut - Select highest order term of f(n), and remove the other terms

## Example

if f(n) = 3n + 5, then is f(n) = O(n)?

Yes, as the highest order term is 3n, so we can say it has O(n) complexity.
