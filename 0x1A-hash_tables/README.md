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
		>> where key is the key <br>
		>> and size is the size of the array of the hash table <br>
	This function should use the hash_djb2 function that you wrote earlier <br>
	Returns the index at which the key/value pair should be stored in the array of the hash table <br>
	You will have to use this hash function for all the next tasks <br>
	<br>

* Task 3: Write a function that adds an element to the hash table. <br>
	Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value); <br>
		>> Where ht is the hash table you want to add or update the key/value to <br
		>> key is the key. key can not be an empty string <br>
		>> and value is the value associated with the key. value must be duplicated. value can be an empty string <br>
	Returns: 1 if it succeeded, 0 otherwise <br>
	In case of collision, add the new node at the beginning of the list <br>
	<br>

* Task 4: Write a function that retrieves a value associated with a key. <br>
	Prototype: char *hash_table_get(const hash_table_t *ht, const char *key); <br>
		>> where ht is the hash table you want to look into <br>
		>> and key is the key you are looking for <br>
	Returns the value associated with the element, or NULL if key couldn’t be found <br>
	<br>


	

