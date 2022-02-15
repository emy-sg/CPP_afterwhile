Ressource:
			https://inst.eecs.berkeley.edu//~cs61c/sp06/handout/fixedpt.html

			Introduction to Fixed Point Number Representation

"Fixed point" arithmetic is much faster than "floating point"

1- "It All starts with an Integer":

Recall that a binary number: 110101 = 1 * 2^5 + 1 * 2^4 + 0 * 2^3 + 1 * 2^1 + 1 * 2^0
									= 32 + 16 + 4 + 1
									= 53

==> Now, if we divide the number 53 by 2, we know the result should be 26.5.
	 However, how do we represent it if we only had integer representations?

2- "The Binary Point":

The key to represent "fractional numbers", like 26.5 above, is the concept of "binary point".
A "binary point" is like the "decimal point" in a decimal system.
It acts as a divider between the "integer" and the "fractional" part of a number.

In a decimal system, a decimal point denotes the position in a numeral that the coefficient should multiply by 10^0 = 1

