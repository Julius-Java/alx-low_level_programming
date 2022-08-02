* This directory contains solutions to the 0x1A-hash_tables project
* Task 0: Write a function that creates a hash table <br>
	Prototype: hash_table_t *hash_table_create(unsigned long int size);<br>
	where size is the size of the array<br>
	Returns a pointer to the newly created hash table<br>
	If something went wrong, your function should return NULL <br>
	<br>

* Task 1: Write a hash function implementing the djb2 algorithm. <br>
	Prototype: unsigned long int hash_djb2(const unsigned char *str); <br>
	<br>

* Task 2: Write a function that gives you the index of a key. <br>
	Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size); <br>
		**  where key is the key <br>
		 ** and size is the size of the array of the hash table <br>
	This function should use the hash_djb2 function that you wrote earlier <br>
	Returns the index at which the key/value pair should be stored in the array of the hash table <br>
	You will have to use this hash function for all the next tasks <br>
	<br>

