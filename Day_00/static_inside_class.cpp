// The Cherno: https://www.youtube.com/watch?v=V-BFlMrBtqQ&ab_channel=TheCherno

/*
 
   			1- "Static variable"

 	if we use a "static" with a "variable", it means that they will be have just one instance 
	   of that variable across all the instances of the class.

==> This mean, that  if I make new class instances, I'm still only going to have one version of that variable
==> This also means, if one of the instances changes the "static variable", this change it's going to reflect all the instances of a class.
==> So, bcuz of that there's no point of referring to the variable through a class instance,
		bcuz it's like a global instance for that class.

			2- "Static method"
	
	Similar to "Static variable", "Static methods" don't have access to the class instance.
	 ==> "Static method" can be called without a class instance and inside class you cannot write a code which refers to a   
